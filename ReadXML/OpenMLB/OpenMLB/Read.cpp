#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
	ifstream xml1;

	cout << "opening XML file\n";
	xml1.open("http://gd2.mlb.com/components/game/playertracker/position_1b.xml");
	if (xml1.fail())
		cout << "Oh Man, didn't work";
	cin.get();
	cin.ignore();

	return 0;
}