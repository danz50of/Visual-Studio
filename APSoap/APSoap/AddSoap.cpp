#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	char c;   // from      http://stackoverflow.com/questions/13559462/using-input-redirection-how-to-read-file-and-get-character-string-in-c
	while (std::cin.get(c))
	{
		std::cout << c << std::endl; // will print out each character on a new line
	}

	return 0;
}


