#ifndef SEARCH_HPP
#define SEARCH_HPP

#include <string>

class search {
	int counter;
	int array [7];
	int highLimit;
	int lowLimit;

	int randomNb();
	bool userGuess(int nb);
	bool iaGuess();
	int iaMechanic(int tryNb, int response);
	int userResponse(int tryNb);
public:
	void play();
};

#endif

