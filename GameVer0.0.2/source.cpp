#include <iostream>
#include <cstring>

using namespace std;

//Class User
class User
{
	int mana;
	int strong;
	int intelligence;
	int agility;
	int damage;
	int armor;
	int weapon;



public:
	char * name = "user";//get from file
	int level;//get from file, change with time or killing bots and users
	int health;



};





int main()
{
	User u;

	cout << "Name: " << u.name << endl;
	cout << "Lvl: " << u.level << endl;
	cout << "helth: " << u.health << endl;
	return 0;
}

