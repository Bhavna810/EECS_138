#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

int main()
{
	std::string str = "Hello how are you";
	str.replace(2,3,"P");
	std::cout << str << std::endl;
	
	std::string str1 = "Hello how are you";
	int ret = str1.find("o",1);
	std::cout << ret << std::endl;
	
	ret = str1.find("q",1);
	std::cout << ret << std::endl;
	
	std::stringstream ss;
	ss << 1997 << "-" << std::setw(2) << std::setfill('0') << 1 << "-" << std::setw(2) << std::setfill('0') << 1;
	
	std::string str2;
	ss >> str2;
	
	std::cout << str2 << std::endl;
	
	return 0;
}