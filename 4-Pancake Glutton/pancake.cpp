#include <iostream>
#include <array>
#include "pancake.hpp"
using namespace std;

std::array<int,10> array;

void pancake::setArray(){
				int i = 0;
				while(i <= 9){
								std::cout << "Please add a value for Person " << i +1 << " : ";
								std::cin >> array[i];
								i++;
				}
				//for (const auto& e : array){
				//				std::cout << e << std::endl;
				//}
}

void pancake::triABulle(){
				int size = array.size();

				for (int i = 0; i < size; i++){
								for (int j = 1; j < size-i; j++){
												if (array[j-1] > array[j]){
																int exchange = array[j-1];
																array[j-1] = array[j];
																array [j] = exchange;
												}
								}
				}

				for (const auto& e : array){
								std::cout << e << std::endl;
				}
}

