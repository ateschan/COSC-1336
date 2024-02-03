// Addison Teschan
// Feb 1 2024
// This program will take in a width and length and print a box of that size with a character of the user's choice

#include<iostream>

using namespace std;

int main(){
  int len, wid;
  char character;
  cout << "Box width: " << endl;
  cin >> wid;
  cout << "Box length: " << endl;
  cin >> len;
  cout << "Character: " << endl;
  cin >> character;

  cout << "Box length: " << len << endl;
  cout << "Box width: " << wid << endl;

  cout << "This is a box: " << endl;
  for (int i = 0; i < len; i++){
    for (int j = 0; j < wid; j++){
      cout << character;
     }
     cout << endl;
   }

  return 0;
}
