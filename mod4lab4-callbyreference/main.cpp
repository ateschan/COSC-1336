//Addison Teschan
//Feb 3 2024
//Call by reference
//This program will demonstrate the use of call by reference

#include <iostream>
using namespace std;

void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void addXtoY(int &x, int y){
  x = x + y;
}

int main(){
  int x = 5;
  int y = 10;
  cout << "swapping..." << endl;
  cout << "x = " << x << " y = " << y << endl;
  swap(x, y);
  cout << "x = " << x << " y = " << y << endl;

  cout << "adding x to y..." << endl;
  cout << "x = " << x << " y = " << y << endl;
  addXtoY(x, y);
  cout << "x = " << x << " y = " << y << endl;
  return 0;
}

