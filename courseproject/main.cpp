//Addison Teschan
//  Programming 1 Course Projects
//  main.cpp
//  Course COSC-1336
//  Jan 26 2024 Feb 1 2024
// Overall course project I will be contributing to
 

#include <iostream>
#include <cmath>
using  namespace std;

int main()
{
    //prompt user for first name and store
    cout << "What is your first name?" << endl;
    string firstName;
    cin >> firstName;
    //prompt user for last name and store   
    cout << "What is your last name?" << endl;
    string lastName;
    cin >> lastName;

    //Output a welcome message to the user
    cout << "Welcome to my programming project " << firstName << " " << lastName << endl;
  while (true){
    int selection;

    //Output welcome header      
    cout << "**********************************************\n*         Programming 1 Course Project       *\n**********************************************" << endl;


    //Output a menu of options to the user
    cout << "|--------------------------------------------|" << endl;
    cout << "|   Enter 1 to calculate the sqaure root     |\n|   Enter 2 to raise X to the Y power        |\n|   Enter 3 to calculate letter grade        |\n|   Enter 4 to create a right triangle       |" << endl;
    cout << "|--------------------------------------------|" << endl;
    cout << "Enter your request... " << endl;

    cin >> selection;


    //switch statement to handle user input
    switch (selection) {

      //exit
      case 0:
        cout << "You entered 0" << endl;
        exit(0);

      //square root
      case 1:
        int num;
        cout << "Enter a number to calculate the sqaure root of: ";
        cin >> num;
        cout << "The square root of " << num << " is " << sqrt(num) << endl;
        break;

      //raise to power
      case 2:

        int num1, num2;
        cout << "I will raise the first number to the second number's power" << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << num1 << " raised to the power of " << num2 << " is " << pow(num1, num2) << endl;
        break;

      //letter grade
      case 3:
        double num3;
        char grade;
        cout << "Enter your GPA:" << endl;
        cin >> num3;
        if (num3 > 3.7){
          grade = 'A';
        }
        else if (num3 > 2.3){
          grade = 'B';
        }
        else if (num3 > 1.3){
          grade = 'D';
        }
        else{
          grade = 'F';
        }
        cout << "Your letter grade was " << grade << endl;
        break;

      //right triangle
      case 4:
        int num4;
        cout << "Enter size of right triangle... ";
        cin >> num4;

        for (int i = 1; i <= num4; i++){
          for (int j = 1; j <= i; j++){
            cout << "*";
          }
          cout << endl;
        }
        break;
    }
  }
    
    return 0;
}
