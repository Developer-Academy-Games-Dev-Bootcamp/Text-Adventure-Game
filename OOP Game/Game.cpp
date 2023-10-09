// OOP Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string kitchen() {
	return "You are in the kitchen. You see a fridge and a table.";
}


int main()
{
	std::cout << "I did an Adventure Game\n";

	

	std::string current = "kitchen";
	std::string command;
	do
	{
		std::string description = "";
		if(current == "kitchen") description = kitchen();

		std::cout << "Looking around "
		+ current
		+ " you see " + description
		+ "\n";
		std::cout << "> ";
		std::getline(std::cin, command);
		//std::cin >> command;
		//add commands here
		if (current == "kitchen")
		{
			if (command == "north")
			{
				current = "hallway";
			}
			//more commands here
			else std::cout << "You can't go that way\n";
		}
		//more rooms here
		
		//global commands here 
		if (command != "exit" && command != "north" && command != "south" && command != "east" && command != "west")
		{
			std::cout << "I don't understand that command\n";
		}
		if (command == "exit")
		{
			std::cout << "Bye\n";
		}
	}
	while (command != "exit");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
