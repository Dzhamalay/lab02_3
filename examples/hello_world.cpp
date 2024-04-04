#include <iostream>
#include <string>

int main()
{
	std::cout<< "Enter your name: "; // name request
	string name;
	std::cin >> name; // entering a name
        std::cout << "Hello World from " << name << std::endl; // prints name
        return 0;
}
