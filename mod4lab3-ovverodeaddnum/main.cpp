//Addison Teschan
//Feruary 3 2024
//This program will allow the user to select from a menu, all 4 of the functions I am creating will be called AddNumbers. I will use overloading.

#include <iostream>
using namespace std;

int AddNumbers(int a, int b){
  return a + b;
}

int AddNumbers(int a, int b, int c){
  return a + b + c;
}

double AddNumbers(double a, double b){
  return a + b;
}

double AddNumbers(double a, double b, double c){
  return a + b + c;
}

int main(){
  while (true){
    int a, b, c, selection;


    double d, e, f;
        cout << "Welcome to Programming 1" << endl;
    cout << "Calculator - please enter your selection or enter 0 to exit" << endl;
    cout << "1. Add two integers" << endl;
    cout << "2. Add three integers" << endl;
    cout << "3. Add two doubles" << endl;
    cout << "4. Add three doubles" << endl;
    cout << "0. Exit the Program" << endl;
    cin >> selection;

    switch (selection){
    case 1:
      cout << "Enter the first integer" << endl;
      cin >> a;
      cout << "Enter the second integer" << endl;
      cin >> b;
      cout << "The sum of the two integers is " << AddNumbers(a, b) << endl;
      break;
    case 2:
      cout << "Enter the first integer" << endl;
      cin >> a;
      cout << "Enter the second integer" << endl;
      cin >> b;
      cout << "Enter the third integer" << endl;
      cin >> c;
      cout << "The sum of the three integers is " << AddNumbers(a, b, c) << endl;
      break;
    case 3:
      cout << "Enter the first double" << endl;
      cin >> d;
      cout << "Enter the second double" << endl;
      cin >> e;
      cout << "The sum of the two doubles is " << AddNumbers(d, e) << endl;
      break;
    case 4:
      cout << "Enter the first double" << endl;
      cin >> d;
      cout << "Enter the second double" << endl;
      cin >> e;
      cout << "Enter the third double" << endl;
      cin >> f;
      cout << "The sum of the three doubles is " << AddNumbers(d, e, f) << endl;
      break;
    case 0:
      cout << "Exiting Program..." << endl;
      return 0;
    default:
      cout << "Invalid" << endl;
      break;
    }
  }
  return 0;
}
