//
// Created by robot on 24/10/17.
//

#include "score.hpp"
#include "iostream"
using namespace std;
int score;

int score::getScore(){
    cin >> score;
    if (score >= 0 && score <= 100){
       return score;
    }
}

void score::useScore(int score){
    switch(score) {
				case 90 ... 100:
						if (score == 100)
										cout << "Wow, you got a perfect Score !!" << endl;
						cout << "Congrats, you got an A !";
						break;
				case 80 ... 89:
						cout << "Congrats, you got an B !";
						break;
				case 70 ... 79:
						cout << "Congrats, you got an C !";
						break;
				case 60 ... 69:
						cout << "Congrats, you got an D !";
						break;
				case 0 ... 59:
						cout << "Congrats, you got an A !" << endl;
						cout << "No it's a joke loser";
						break;
    }
}
