#include <iostream>
#include "asking.hpp"
using namespace std;

int number;

void asking::askNumber(){
				std::cout << "Hello" << endl; 
				int i = 0;
				do{
								std::cout << "please choose a number != 5: ";
								std::cin >> number;
								i++;
				}
				while (number != 5 && i < 10);
				if (number == 5)
								std::cout << "Hey! you weren't supposed to enter 5!" << endl;
				else if (i == 10)
								std::cout << "Wow, you're more patient then I am, you win." << endl;
};

void asking::asking::askNumber2(){
				std::cout << "Hello" << endl;
				int i = 0;
				do{
								std::cout << "please choose a number != " << i << ": ";
								std::cin >> number;
								i++;
				}
				while (number != i - 1);
				if (number == i - 1)
								std::cout << "Error, exit!";
};
