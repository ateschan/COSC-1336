//Addison Teschan
//  Programming 1 Course Projects
//  main.cpp
//  Course COSC-1336
//  Jan 26 2024 Feb 1 2024 Feb 10 2024 Feb 15 2024 Feb 22 2024 Mar 5 2024
//
// Overall course project I will be contributing to
 
#include <iostream>
#include <cmath>
using  namespace std;

struct Contacts{
  string firstName;
  string lastName;
  string phoneNumber;
};


void calculateLetterGrade();
void createRightTriangle();
void calculateWeeklyPay(double rate, int hours);
void calculateInterestEarned();
void printHeader();
void firstLast(string &firstName, string &lastName);
void getGrades(int arr[]);
void displayGrades(int arr[]);
double averageGrades(int arr[]);
void printContacts(Contacts arr[]);

int main()
{
    string firstName = "", lastName = "";
    firstLast(firstName, lastName);

    //Output a welcome message to the user

  while (true){
    int selection;

    //Output welcome header      
    printHeader();
    //Output a menu of options to the user
    cout << "|--------------------------------------------|" << endl;
    cout << "|   Enter 1 to calculate the sqaure root     |\n|   Enter 2 to raise X to the Y power        |\n|   Enter 3 to calculate letter grade        |\n|   Enter 4 to create a right triangle       |\n|   Enter 5 to calculate weekly pay          |\n|   Enter 6 to calculate interest earned     |\n|   Enter 7 to calculate grades              |\n|   Enter 8 to print contacts                |" << endl;
    cout << "|--------------------------------------------|" << endl;
    cout << "Enter your request... " << endl;

    cin >> selection;


    //switch statement to handle user input
    switch (selection) {

      //exit
      case 0:
        cout << "You entered 0" << endl;
        exit(0);
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
        calculateLetterGrade();
        break;
      case 4:
        createRightTriangle();
        break;
      case 5:
        double rate;
        int hours;
        cout << "Enter hours: ";
        cin >> rate;
        cout << "Enter pay rate: ";
        cin >> hours;
        calculateWeeklyPay(rate, hours);
        break;
      case 6:
        calculateInterestEarned();
        break;
      case 7:
        int arr[5];
        getGrades(arr);
        displayGrades(arr);
        cout << "Average: " << averageGrades(arr) << endl;
      case 8:
        Contacts arrayContacts[3];
        arrayContacts[0] = {"John", "Doe", "240-193-2333"};
        arrayContacts[1] = {"Jane", "D", "240-192-2333"};
        arrayContacts[2] = {"Jo", "Do", "249-193-2313"};
        printContacts(arrayContacts);
    }
  }
    
    return 0;
}

void firstLast(string &firstName, string &lastName){
  cout << "Enter your first name: ";
  cin >> firstName;
  cout << "Enter your last name: ";
  cin >> lastName;
  cout << "Welcome to my programming project " << firstName << " " << lastName << endl;
}

void printHeader(){
  cout << "**********************************************\n*         Programming 1 Course Project       *\n**********************************************" << endl;
}

void calculateLetterGrade(){
        double num3;
        char grade;
        cout << "enter your gpa:" << endl;
        cin >> num3;
        if (num3 > 3.7){
          grade = 'a';
        }
        else if (num3 > 2.3){
          grade = 'b';
        }
        else if (num3 > 1.3){
          grade = 'd';
        }
        else{
          grade = 'f';
        }
  cout << "your letter grade was " << grade << endl;
}

void createRightTriangle(){
  int num4;
  cout << "Enter size of right triangle... ";
  cin >> num4;

  for (int i = 1; i <= num4; i++){
    for (int j = 1; j <= i; j++){
      cout << "*";
    }
    cout << endl;
  }
}

void calculateWeeklyPay(double rate, int hours){
  double pay;
  if (hours > 40){
    pay = (40 * rate) + ((hours - 40) * (rate * 1.5));
  }
  else{
    pay = hours * rate;
  }
  cout << "Weekly pay is $" << pay << endl;
}

void calculateInterestEarned(){
  double principal, rate, time, interest;
  cout << "Enter the initial amount: ";
  cin >> principal;
  cout << "Enter the interest rate: ";
  cin >> rate;
  cout << "Enter the time in years: ";
  cin >> time;
  for (int i = 0; i < time; i++){
    principal += principal * rate;
    cout << "Year " << i + 1 << " interest: " << principal << endl;
  }
}

void getGrades(int arr[]){
  cout << "Grade Calculator: " << endl;
  cout << "Enter grade 1: " ;
  cin >> arr[0];
  cout << "Enter grade 2: " ;
  cin >> arr[1];
  cout << "Enter grade 3: " ;
  cin >> arr[2]; 
  cout << "Enter grade 4: " ;
  cin >> arr[3];
  cout << "Enter grade 5: " ;
  cin >> arr[4];
}

void displayGrades(int arr[]){
  for (int i = 0; i < 5; i++){
    cout << "Grade " << i + 1 << ": "<<  arr[i] << ".00" << endl;
  }
}

double averageGrades(int arr[]){
  double avg;
  for (int i = 0; i < 5; i ++){
    avg += arr[i];
  }
  return avg / 5;
}

void printContacts(Contacts* arr){
  for (int i = 0; i < 3; i++){
    cout << "First Name: " << arr[i].firstName << endl;
    cout << "Last Name: " << arr[i].lastName << endl;
    cout << "Phone #: " << arr[i].phoneNumber << endl;
    cout << endl;
  }
}
