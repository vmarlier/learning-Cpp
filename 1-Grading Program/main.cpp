#include <iostream>
#include <thread>
#include <chrono>
#include "score.hpp"

void ScoreFunc();

int main(int argc, char* argv[]) 
{
	ScoreFunc();			
}

void ScoreFunc()
{
	cout << "Bonjour" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(4));
	std::cout << "Vous allez recevoir votre note en fonction de votre score" << std::endl; 
	std::this_thread::sleep_for(std::chrono::seconds(4));
	std::cout << "Merci d'inscrire le votre: ";
	score score1;
	score1.useScore(score1.getScore());
}
