//Addison Teschan
//Feb 21 2024
//Playing with vectors
#include<iostream>
#include<vector>
using namespace std;

int main(){
  //Vec init
  vector<int> myVec = {};
  cout << "Enter a list of integer, type -1 to stop" << endl;

  while (true){
    int input;
    cin >> input;
    if (input == -1){
      break;
    }
    else {
      myVec.push_back(input);
    }
  }

  cout << "The contents of the vector are: " << "  ";
  for (int num : myVec){
    cout << num << "   ";
  }
  cout << endl;

  int locationInput;
  cout << "Enter a number to search for: " << "\n";
  cin >> locationInput;
  int output = -1;
  int iter = 0;
  for (int num : myVec){
    
    if (locationInput == num){
      output = iter;
      break;
    }
    iter ++;
  }
  cout << endl;

  cout << locationInput << " was found at location " << iter << endl;
  int input;
  cout << "Enter a position to remove " << "\n";
  cin >> input;
  myVec.erase(myVec.begin() + input);

  cout << "The contents of the vector after being removed are: " << "  ";
  for (int num : myVec){
    cout << num << "   ";
  }
  cout << endl;

  int val;
  int pos;
  cout << "Enter a number to insert: " << endl;
  cin >> val;
  cout << "Enter a position: " << endl;
  cin >> pos;

  myVec.insert(myVec.begin() + pos, val); 
  cout << "The contents of the vector after being inserted are: " << "  ";
  for (int num : myVec){
    cout << num << "   ";
  }
  cout << endl;
  return (0);
}
