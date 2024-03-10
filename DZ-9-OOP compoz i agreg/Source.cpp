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

private:
	int Counter_Item = 0;
};

class Equipment :public Items
{
public:

private:
	int Counter_Eqip = 0;
};



class Personag
{
public:
	Personag(std::string name, std::string gender) {
		Name_ = name;
		Gender_ = gender;
		Health_ = 20;
		Age_ = 10;
		Race_ = "Gnome";
		
	}

	class Backpack
	{
	public:
		Backpack() {};
		Backpack(int count) 
		{
			It.reserve(10);
			Eqip.reserve(5);
		};
		~Backpack() {};

	private:
		std::vector<Items>It;
		std::vector<Equipment>Eqip;
	}BP;



private:
	std::string Name_; 
	int Health_;   // здоровье
	std::string Gender_ = ""; //пол
	int Age_;                 //возраст
	std::string Race_ = "";  //раса
	
};