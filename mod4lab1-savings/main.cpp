//Addison Teschan
//Ferurary 3 2024
//This is a program that calculates bank deposits

#include<iostream>
using namespace std;

void header(){
  cout << "******************************************" << endl;
  cout << "**************ADDISON BANK****************" << endl;
  cout << "******************************************" << endl;
}

double deposit(double current, double depo){
  double total = current + depo;
  return total;
}

int main(){
  double currentAmount;
  double depositAmount;

  header();
  cout << "Please enter your Initial Balance: ";
  cin >> currentAmount;
  cout << "Please enter your deposit amount: ";
  cin >> depositAmount;

  cout << "Your new balance is: " << deposit(currentAmount, depositAmount) << endl;


  return 0;
}


