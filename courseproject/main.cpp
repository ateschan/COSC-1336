//Addison Teschan
//  Programming 1 Course Projects
//  main.cpp
//  Course COSC-1336
//  Jan 26 2024
// Overall course project I will be controbuting to
// 

#include <iostream>
#include <cmath>
using  namespace std;

int main()
{
    //****** Variable section *********
    
    //****** Welcome Section **********
    //Output welcome header      
    cout << "**********************************\n*  Programming 1 Course Project  *\n**********************************" << endl;

    //prompt user for first name and store
    cout << "What is your first name?";
    string firstName;
    cin >> firstName;
    //prompt user for last name and store   
    cout << "What is your last name?";
    string lastName;
    cin >> lastName;

    //Output a welcome message to the user
    cout << "Welcome to my programming project " << firstName << " " << lastName << endl;
    cout << "Make a selection from 1 to 3, enter 0 to end the program" << endl;
    cout << "Enter 1 to calculate the sqaure root:\nEnter 2 to raise X to the Y power\nEnter 3 to calculate letter grade" << endl;
    int selection;
    cin >> selection;
    
    switch (selection) {

      case 0:

        cout << "You entered 0" << endl;
        break;

      case 1:

        int num;
        cout << "Enter a number to calculate the sqaure root of: ";
        cin >> num;
        cout << "The square root of " << num << " is " << sqrt(num) << endl;
        break;

      case 2:

        int num1, num2;
        cout << "I will raise the first number to the second number's power" << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << num1 << " raised to the power of " << num2 << " is " << pow(num1, num2) << endl;
        break;

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

    }
    
    return 0;
}
