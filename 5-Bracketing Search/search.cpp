#include <iostream>
#include <ctime>
#include <cstdlib>
#include "search.hpp"
using namespace std;

int counter;
int array [7] = {0};
int highLimit;
int lowLimit;


void search::play(){
	int random = randomNb();
	int game;
	bool win;

	std::cout << "Welcome! Let's begin Guess2Number" << std::endl;
	std::cout << "1: wanna try to guess" << std::endl << "2: wanna IA try to guess" << std::endl;
	std::cin >> game;

	if (game == 1){
		win = userGuess(random);
	}
	else if (game == 2){
		win = iaGuess();
	}

	if (win = true){
		std::cout << "Got it in " << counter << " shots !! Bye" << std::endl;
	}
	else if (win = false)
	{
		std::cout << "Sorry C++ is better than you" << std::endl << "Come try again !" << std::endl;
		play();
	}

}

int search::randomNb(){
	std::srand(std::time(0));
	int toReturn = std::rand() % 100;
	return toReturn + 1;
}

bool search::userGuess(int nb){
	std::cout << "A number between 1 and 100" << std::endl;

	int userMind;
	counter = 0;
	do{
		std::cout << "→ ";
		std::cin >> userMind;
		if (userMind > nb && userMind <= 100){
			std::cout << "too high" << std::endl;
		}
		else if (userMind < nb && userMind >= 1){
			std::cout << "too low" << std::endl;
		}
		else if (userMind == nb){
			std::cout << "HEEEEEEEE!" << std::endl;
		}
		else{
			std::cout << "Are you stupid ?" << std::endl;
		}
		counter++;
	}
	while (userMind != nb);

	if (userMind == nb){
		return true;
	}
	else{
		return false;
	}
}

bool search::iaGuess(){
	int user_Response = 0;
	counter = 0;

	std::cout << "Ok, ready ?" << std::endl;

	this->highLimit = 101;
	this->lowLimit = 0;

	do{
		this->array[counter] = iaMechanic(counter, user_Response);
		user_Response = userResponse(counter);
		counter++;
	}
	while (user_Response != 3);

	if (user_Response == 3){
		return false;
	}
	else{
		return true;
	}
}

int search::iaMechanic(int tryNb, int response){
	int proposition;

	int calcul = this->highLimit - this->lowLimit;

	int last = this->array[tryNb-1];

	std::cout << this->highLimit << std::endl << this->lowLimit << std::endl << this->array[tryNb-1] << std::endl;

	if ( this->lowLimit != 0){
		proposition = calcul / 2 + this->lowLimit; 
	}
	else{
		proposition = calcul / 2; 
	}

	std::cout << std::endl << "I think: " << proposition << std::endl;

	this->array[tryNb] = proposition;
	return proposition;
}

int search::userResponse(int tryNb){
	int response;
	std::cout << "(Please enter response like)" << endl << "[1]lower"<< std::endl << "[2]higher"<< std::endl << "[3]yes" << std::endl;
	cin >> response;
	switch (response){
		case 1:
			this->highLimit = this->array[tryNb];
			break;
			return 1;
		case 2:
			this->lowLimit = this->array[tryNb];
			break;
			return 2;
		case 3:
			cout << "Yes IA win always!!!" << endl;
			return 3;
			break;
	}
	return response;
}
