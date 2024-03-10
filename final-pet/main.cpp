//Addison Teschan
//Mar 5 2024
//
//Object oriented programming with the pat class

#include<iostream>
#include"Pet.h"

using namespace std;

int main(){
  string name;
  string type;
  string sound;
  cout << "What is the pet's name?" << endl;
  cin >> name;
  cout << "What is the pet's type" << endl;
  cin >> type;
  cout << "What is the pet's sound?" << endl;
  cin >> sound;
  Pet mypet("","",""); 
  mypet.setType(type);
  mypet.Pet::setName(name);
  mypet.setSound(sound);

  cout << "Name: " << mypet.getName() << endl;
  cout << "Type: " << mypet.getType() << endl;
  cout << "Sound: " << mypet.getSound() << endl;

  return(0);
}

