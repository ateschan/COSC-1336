//Addison teschan
//Feb 9 2024
//Sams coffee shop
//Simple program for an interactive coffee shop menu

#include <iostream>
using namespace std;

int largeSold = 0;
int medSold = 0;
int smallSold = 0;

const double smallPrice = 1.75;
const double medPrice = 1.90;
const double largePrice = 2.00;

void printHeader();
void printSelection();
void sellCoffee();
void showCoffeeInfo();
void showAmountCoffeeSold();
void showProfitMade();

int main(){
printHeader();
	while (true){
		int input;
		printSelection();
		cin >> input;
		
		switch (input){
			case 1:
				sellCoffee();
				break;
			case 2:
				showCoffeeInfo();
				break;
      case 3:
				showAmountCoffeeSold();
				break;
      case 4:
				showProfitMade();
				break;
      case 5:
				exit(0);
		}
}

return 0;
}

void printHeader(){
	cout << "***********************" << endl;
	cout << "***Sam’s Coffee Shop***" << endl;
	cout << "***********************" << endl;

}

void printSelection(){
	cout << "Please make a selection from the following menu: \n1: Sell a Coffee\n2: Show a number of cups sold of each size\n3: Show total amount of coffee Sold\n4: Show total profit\n5: Quit Program" << endl;

}

void sellCoffee(){
	int input;
	cout << "What kind of coffee would you like to buy?" << endl;
	cout << "Sizes—------------------------------------\n1) Small 9oz $1.75\n2) Medium 12oz $1.90\n3) Large 15oz $2.00" << endl;
  cin >> input;
	switch (input){
		case 1: 
    smallSold = smallSold + 1;
    break;
		
    case 2: 
    medSold = medSold + 1;
    break;

    case 3: 
    largeSold = largeSold + 1;
    break;
	}
}

void showCoffeeInfo(){
  cout << "small sold:  "<< smallSold << " $" << smallSold * smallPrice <<endl;
  cout << "medium sold: " << medSold <<  " $" << medSold * medPrice<< endl;
  cout << "large sold : " << largeSold<< " $" << largeSold * largePrice<< endl;
}

void showAmountCoffeeSold(){
	cout << "Amount of coffee sold: " << smallSold + medSold + largeSold << endl;
}

void showProfitMade(){
	double profit = (double) (smallSold * smallPrice) + (medSold * medPrice) + (largeSold * largePrice);  
}

