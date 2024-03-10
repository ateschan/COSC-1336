//Addison Teschan
//Mar 5 2024
//
//Object oriented programming with the pet class
#include"Pet.h"
#include<string>

using namespace std;

void Pet::setName(string Name)
{
  name = Name;
}

void Pet::setType(string Type)
{
  type = Type;
}

void Pet::setSound(string Sound)
{
  sound = Sound;
}

string Pet::getName() const{
  return name;
}

string Pet::getType() const{
  return type;
}

string Pet::getSound() const{
  return sound;
}

void Pet::printPet() const{
  cout << name << endl;
  cout << type << endl;
  cout << sound << endl;
}

Pet::Pet(string Name, string Type, string Sound){
  name = Name;
  type = Type;
  sound = Sound;
}
