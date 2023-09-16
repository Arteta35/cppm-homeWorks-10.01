#include <iostream>


int main(int argc, char** argv) {

	std::string name = "Name";


	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Hello, " << name << "!" << std::endl;

	return 0;
	
}