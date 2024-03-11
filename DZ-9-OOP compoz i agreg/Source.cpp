#include<iostream>
#include<vector>

//gender
//age
//race
//backpack
//items
//equipment

class Items
{
public:
	Items() {};
private:
	int Counter_Item = 0;
};

class Equipment :public Items
{
public:
	Equipment() {};
private:
	int Counter_Eqip = 0;
};



class Personag
{
public:
	Personag(std::string name, std::string gender):BP(5){
		Name_ = name;
		Gender_ = gender;
		Health_ = 20;
		Age_ = 10;
		Race_ = "Gnome";
		
	}

	class Backpack
	{
	public:
		std::vector<Items>It;
		std::vector<Equipment>Eqip;

		Backpack(int count) 
		{
			It.reserve(10);
			Eqip.reserve(count);
		};
		~Backpack() {};

	private:
		
	}BP;
	void Set_Items_Backpack(Items* item) { BP.It.push_back(*item); }
	void Set_Equipment_Backpack(Equipment* eqip) { BP.Eqip.push_back(*eqip); }

private:
	std::string Name_; 
	int Health_;   // здоровье
	std::string Gender_ = ""; //пол
	int Age_;                 //возраст
	std::string Race_ = "";  //раса
	
};

int main() {

	Personag PS1("Bella", "Women");
	Items apple;
	Equipment bott;
	Items* Set_Item;
	Set_Item = &apple;
	PS1.Set_Items_Backpack(Set_Item);
	/*Set_Item = &bott;
	PS1.Set_Equipment_Backpack(Set_Item);*/
	Equipment* Set_Eqip;
	Set_Eqip = &bott;
	PS1.Set_Equipment_Backpack(Set_Eqip);


	return 0;
}