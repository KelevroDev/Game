#include <iostream>
#include <cstring>

using namespace std;


//Classes////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class User
class User
{
	int mana = 100 + Weapon.mana + Boots.mana + Head.mana + Glows.mana + Body.mana;
	int strong = 5 + level + Weapon.strong + Boots.strong + Head.strong + Glows.strong + Body.strong;
	int intelligence = 5 + level + Weapon.intelligence + Boots.intelligence + Head.intelligence + Glows.intelligence + Body.intelligence;
	int agility = 5 + level + Weapon.agility + Boots.agility + Head.agility + Glows.agility + Body.agility;
	

public:
	char * name = "bot";//get from file
	int level = 5;//get from file, change with time or killing bots and users
	int health = 35 + (level * 2) + ;
	int damage = 10 + Weapon.damage;

};

//Class Head, get from file, drop from bots, or enemy castles, or can be create in your castle
Class Weapon
{
	char name = {"Name"}
	int mana = 10;
	int strong = 2;
	int intelligence = 2;
	int agility = 2;
	int damage = 15;

	friend User;
}

//Class Head, get from file, drop from bots, or enemy castles, or can be create in your castle
Class Head
{
	int mana = 5;
	int strong = 2;
	int intelligence = 1;
	int agility = 4;
	friend User;
}

//Class Glows, get from file, drop from bots, or enemy castles, or can be create in your castle
Class Glows
{
	int mana = 5;
	int strong = 2;
	int intelligence = 1;
	int agility = 4;
	friend User;
}	

//Class Body, get from file, drop from bots, or enemy castles, or can be create in your castle
Class Body
{
	int mana = 5;
	int strong = 5;
	int intelligence = 2;
	int agility = 2;
	friend User;
}

//Class Body, get from file, drop from bots, or enemy castles, or can be create in your castle
Class Boots
{
	int mana = 0;
	int strong = 2;
	int intelligence = 1;
	int agility = 1;
	friend User;
}	

//Class Bot
class Bot
{
	int mana = 100;
	int strong = 5 + level;
	int intelligence = 5 + level;
	int agility = 5 + level;

public:
	char * name = "bot";//get from file
	int level = 5;//get from file, change with time or killing bots and users
	int health = 35 + (level * 2);
	int damage = 10 + weapon;
	int armor = 2;
	int weapon = 5;
};



//class Castle
class Castle
{
	int CastleLevel = 2;
	int unitNumber = 5 + CastleLevel;
	int 
};


//function fight for tests
void fight(User & u, Bot & b)
{
	
	do
	{
		u.health = u.health - b.damage;//need to do this batter
		b.health = b.health - u.damage;//need to do this batter
	}
	while (u.health > 0 || b.health > 0);
	cout << "fight end";
	if (u.health <= 0)
	{
		cout << "Winner is - " << u.name;
	}
	if (b.health <= 0)
	{
		cout << "Winner is - " << b.name;
	}
}

//END Classes /////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	User u;
	Bot b;
	cout << "Name: " << u.name << endl;
	cout << "Lvl: " << u.level << endl;
	cout << "helth: " << u.health << endl;
	cout << "Name: " << b.name << endl;
	cout << "Lvl: " << b.level << endl;
	cout << "helth: " << b.health << endl;
	fight(u, b);

	return 0;
}

