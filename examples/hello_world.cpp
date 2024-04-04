#include <iostream>
#include <string>

int main()
{
	std::cout<< "Enter your name: "; // Namensanfrage
	string name;
	std::cin >> name; // einen Namen eingeben
        std::cout << "Hello World from " << name << std::endl; // druckt den Namen
        return 0;
}
