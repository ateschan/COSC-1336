//Addison Teschan
//Mar 5 2024
//
//Object oriented programming with the pat class
#ifndef Pet_h
#define Pet_h
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class Pet{
  public:
    void printPet() const;
    void setName(string name);
    void setType(string type);
    void setSound(string sound);

    string getName() const;
    string getType() const;
    string getSound() const;

    Pet(string name = "", string type = "", string sound = "");

  private:
    string name;
    string type;
    string sound;
};

#endif /* per_h */
