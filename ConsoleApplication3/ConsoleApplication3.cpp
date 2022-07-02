#include <iostream>
#include <string>
#include <vector>
#ifdef _WIN32
	#include <Windows.h>
#else
	#include <unistd.h>
#endif
#include "Addition.h"

int main() {
	//Declare variables
	int i;
	int num{ 1 };
	std::string str{};

	//Input
	std::cout << "Enter input:" << std::endl;
	std::cin >> str;
		system("CLS");

	//Declare variables
	std::vector<char> vct;
	for (i = 0; i < str.length(); i++)
		vct.push_back(str[i]);

	//Output
	q0(vct, num);
	std::cin >> str;

	//Return values
	return 0;
}