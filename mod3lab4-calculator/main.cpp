//Addison Teschan
//February 1 2024
//Simple calculator program that takes two numbers and an operation and returns the result

#include <iostream>

using namespace std;

void calculate(int choice, int num1, int num2){
   switch (choice) {
     case 0:
       cout << "Exiting the calculator. Goodbye!" << endl;\
         exit(0);
     case 1:
       cout << "Result: " << num1 << " + " << num2 << " = " <<  num1 + num2 << endl;
         break;
     case 2:
       cout << "Result: " << num1 << " - " << num2 << " = " <<  num1 - num2 << endl;
         break;
     case 3:
       cout << "Result: " << num1 << " * " << num2 << " = " <<  num1 * num2 << endl;
         break;
     case 4:
       cout << "Result: " << num1 << " / " << num2 << " = " <<  num1 / num2 << endl << endl;
         break;
     default:
       cout << "Invalid choice! Please enter a valid option..." << endl;
         break;
   }
}

int main() {
  while (true) {
    int choice;
    int num1, num2;

    cout << "Calculator Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    calculate(choice, num1, num2);
  }
  return 0;
}
