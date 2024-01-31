//Addison Teschan 
//January 17 2024
//POS register system
//Simple in/out with pos register functionalyi like calulating tax 

#include <iostream>

using namespace std;

int main(){
  string firstitem, seconditem, thirditem;
  int firstprice, secondprice, thirdprice;
  cout << "What is the first item?" << endl;
  cin >> firstitem;
  cout << "What is the price?" << endl;
  cin >> firstprice;

  cout << "What is the second item?" << endl;
  cin >> seconditem;
  cout << "What is the price?" << endl;
  cin >> secondprice;
  
  cout << "What is the third item?" << endl;
  cin >> thirditem;
  cout << "What is the price?" << endl;
  cin >> thirdprice;
  
  double subtotal = firstprice + secondprice + thirdprice;
  double taxamount = subtotal * 0.08;
  double grandtotal = subtotal - taxamount;

  cout << "Your first item was " << firstitem << " at $" << firstprice << endl << 
"Your second item was " << seconditem << " at $" << secondprice << endl << "Your third item was " << thirditem << " at $" << thirdprice << endl << " Your subtotal was $" << subtotal << endl << " Your tax was $" << taxamount << endl << "Your grand total was $" << grandtotal << endl; 

  return 0;
}
