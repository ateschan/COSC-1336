//Addison Teschan
//Feb 12 2024
//
//This program removes all vowels in a string
//
#include <iostream>
using namespace std;

bool isVowel(char c);
string removeVowels(string s);

int main(){
  string input;
  cout << "Enter a string: ";
  cin >> input;
  cout << "String without vowels: " << removeVowels(input) << endl;


  return 0;
}

bool isVowel(char c){
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
    return true;
  }
  return false;
}

string removeVowels(string s){
  string result = "";
  for(int i = 0; i < s.length(); i++){
    if(!isVowel(s[i])){
      result += s[i];
    }
  }
  return result;
}

