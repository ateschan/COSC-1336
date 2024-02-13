//Addison Teschan
//Feurary 3 2024
//This program wull use functions to determine the sum and count of odd and even numbers in a range

#include <iostream>
using namespace std;

 int SumOfOdd(int first, int second){
      int sum = 0;
      for(int i = first; i <= second; i++){
          if(i % 2 != 0){
              sum += i;
          }
      }
      return sum;
 }

  int SumOfEven(int first, int second){
        int sum = 0;
        for(int i = first; i <= second; i++){
            if(i % 2 == 0){
                sum += i;
            }
        }
        return sum;
  }

int NumberOfOdd(int first, int second){
    int count = 0;
    for(int i = first; i <= second; i++){
        if(i % 2 != 0){
            count++;
        }
    }
    return count;
}

int NumberOfEven(int first, int second){
    int count = 0;
    for(int i = first; i <= second; i++){
        if(i % 2 == 0){
            count++;
        }
    }
    return count;
}

int main() {
    int first, second;

    cout << "Enter the first number (lowest) in the range: ";
    cin >> first;
    cout << "Enter the second number (highest) in the range: ";
    cin >> second;
    
    if (first < 100 || first > 200 || second < 100 || second > 200){
        cout << "The numbers are not in the range of 100 to 200" << endl;
        return 0;
    }

    cout << "The sum of the odd numbers in the range: " << SumOfOdd(first, second) << endl;
    cout << "The sum of the even numbers in the range: " << SumOfEven(first, second) << endl;

    cout << "The count of odd numbers in the range: " << NumberOfOdd(first, second - 1) << endl;
    cout << "The count of even numbers in the range: " << NumberOfEven(first, second - 1) << endl;

    return 0;
}
