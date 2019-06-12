#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
	string str;
	cout << "Input string ->";
	getline(std::cin, str);
	cout << "\n" << std::count_if(str.begin(), str.end(), ::ispunct) << std::endl;
}