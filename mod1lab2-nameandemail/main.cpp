#include <iostream>

using namespace std; 
int main (int argc, char *argv[]) {
  string name, email;
  cout << "What is your name? ";
  cin >> name;
  cout << "What is your email?";
  cin >> email;
  cout << "Your name is: " << name <<" and your email is " << email << endl;
  return 0;
}
