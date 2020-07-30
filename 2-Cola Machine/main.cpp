#include <iostream>
#include "beverages.hpp"
using namespace std;

int main(){
				beverages beverages1;
				beverages1.getBeveragesList();
				int nb = beverages1.askBeverages();
				beverages1.showBeveragesName(nb);
}
