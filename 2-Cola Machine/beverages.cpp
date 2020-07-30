#include <iostream>
#include <string>
#include "beverages.hpp"
using namespace std;

std::string beveragesList [5] = {"Coca-Cola","Champagne","Oasis","RedBull","Ice-Tea"};

void beverages::getBeveragesList(){
				std::cout << "Boissons Disponibles" << std::endl;
				for (int i=0;i<=4;i++){
								std::cout << i+1 << " " << beveragesList[i] << endl;
				}
}

int beverages::askBeverages(){
				int nb;
				cout << "Boisson n°:";
				cin >> nb;
				if (nb < 1 || nb > 5){
								std::cout << "Error. choice was not valid, here is your money back." << endl;
								askBeverages();
				}
				else{
								nb = nb - 1;
								return nb;
				}
			/*
				switch (nb){
								case 1 ... 5:
												nb = nb - 1;
												return nb;
												break;
								default:
												std::cout << "Error. choice was not valid, here is your money back." << endl;
												askBeverages();
				}
				*/
}

void beverages::showBeveragesName(int nb){
				cout << endl << "You choose " << beveragesList[nb];
}
