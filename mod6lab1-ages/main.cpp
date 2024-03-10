//Addison Teschan
//Feb 18 2024
//Array functions. Age calculator.
//

#include <iostream>
using namespace std;

double averageAge(int arr[]){
  int avg = 0;
  for (int i = 0; i < 5; i++){
    avg += arr[i];
  }
  return (double) avg / 5;
}

int lowestAge(int arr[]){
  int lowest = arr[0];
  for (int i = 0; i < 5; i++){
    if (arr[i] > lowest){
      lowest = arr[i];
    } 
  }
  return lowest;
}

int highestAge(int arr[]){
  int highest = arr[0];
  for (int i = 0; i < 5; i++){
    if (arr[i] < highest){
      highest = arr[i];
    } 
  }
  return highest;
}

int main(){
  int arr[5];
  cout << "Please enter 5 values seperated by spaces: " << endl;
  cin >> arr[0];
  cin >> arr[1];
  cin >> arr[2];
  cin >> arr[3];
  cin >> arr[4];

  cout << arr [0] << "," << arr [1] << "," << arr [2] << "," << arr [3] << "," << arr [4] << "," << endl;

  cout << "Average: " << averageAge(arr) << endl;
  cout << "Lowest Age: " << lowestAge(arr) << endl;
  cout << "Highest Age: " << highestAge(arr) << endl;
}
