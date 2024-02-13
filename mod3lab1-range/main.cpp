//Addison Teschan
//February 3 2024
//This program takes two numbers and finds the count of numbers in the range that are multiples of 3 and 5 

#include<iostream>

using namespace std;

int main(){
  int input1, input2, lower, upper;
  int ct3 = 0, ct5 = 0;

  cout << "Enter two numbers: ";
  cin >> input1 >> input2;
  
  if (input1 < input2){
    lower = input1;
    upper = input2;
  } else {
    lower = input2;
    upper = input1;
  }

  for (int i = lower; i <= upper; i++){
    if (i % 3 == 0){
      ct3++;
    }
    if (i % 5 == 0){
      ct5++;
    }
  }
  
  cout << "The lower range: " << lower << endl;
  cout << "The upper range: " << upper << endl;

  cout << "The count of numbers in the range that are multiples of 3: " << ct3 << endl;
  cout << "The count of numbers in the range that are multiples of 5: " << ct5 << endl;

  return 0;
}
