#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <fstream>
#include <stdio.h>
//#include <CkHttp.h>   //Chilkat is a library DZ will start investigating 6/16/2016  downloaded to chilkat folder locally

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