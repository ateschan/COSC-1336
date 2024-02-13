//Addison Teschan
//
//Feb 12 2024
//
//Program for making new namespaces for class

#include <iostream>

namespace namespace1{
  void displayMessage(){
    std::cout << "Hello from namespace1!" << std::endl;
  }
  int addNumbers(int a, int b){
    return a + b;
  }
}

namespace namespace2{
  void displayMessage(){
    std::cout << "Hello from namespace2!" << std::endl;
  }
  double addNumbers(double a, double b){
    return a + b;
  }
}

int main(){
  namespace1::displayMessage();
  namespace2::displayMessage();
  std::cout << namespace1::addNumbers(1, 2) << std::endl;
  std::cout << namespace2::addNumbers(1.4, 2.1) << std::endl;
  return 0;
}
