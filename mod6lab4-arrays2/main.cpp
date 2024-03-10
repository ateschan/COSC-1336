//Addison Teschan
//Feb 22 2024
//
//Mod 6 Challenge lab - multiple functions.

#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int arr[10];
void selectionSort();
void tenElementInit();
void printElementsOfArray();
int sumOfElements(int arr[]);
int maxElement(int arr[]);
int minElement(int arr[]);

int main(){
  cout << "Elements: ";
  tenElementInit();
  printElementsOfArray();
  cout << "Sum of elements: " << sumOfElements(arr) << endl;
  cout << "Max element: " << maxElement(arr) << endl;
  cout << "Min element: " << minElement(arr) << endl;
  cout << "Sorted array: ";
  selectionSort();
  printElementsOfArray();
  return 0;
}



void selectionSort(){
  int i;
  int smallestIndex;
  int location;
  int temp;
  for (int i = 0; i < 10; i ++){
    smallestIndex = i;
    for (location = i + 1; location < 10; location++){
      if (arr[location] < arr[smallestIndex]){
        smallestIndex = location;
      }
      temp = arr[smallestIndex];
      arr[smallestIndex] = arr[i];
      arr[i] = temp;
    }
  }
}

void tenElementInit(){
  srand(time(0));
  for (int i = 0; i < 10; i++){
    arr[i] = (rand() % 100) + 1; 
  }
}

void printElementsOfArray(){
  for (int i = 0; i < 10; i++ ){
    cout << arr[i] << " ";
  } 
  cout << endl;
}

int sumOfElements(int arr[]){
  int sum = 0;
  for (int i = 0; i < 10; i++ ){
    sum += arr[i];
  } 
  return sum;
}

int maxElement(int arr[]){
  int max = 0;
    for (int i = 0; i < 10; i++ ){
    if (arr[i] > max){
      max = arr[i];
    } 
  }
 return max;
}


int minElement(int arr[]){
  int min = maxElement(arr);
    for (int i = 0; i < 10; i++ ){
    if (arr[i] < min){
      min = arr[i];
    } 
  } 
 return min;
}

