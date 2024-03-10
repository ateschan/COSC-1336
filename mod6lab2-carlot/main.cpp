//Addison Teschan
//Feb 21 2024
//Gas guzzler detection program 

#include<iostream>

using namespace std;

void displayCarDetails(string cars[], double mpg[], int size){
  cout << "Car      Mpg       Status\n" << "-----------------------------" << endl; 
  double avg;
  for (int i = 0; i < size; i++){
    avg += mpg[i];
    string status = "Gas Guzzler";
    if (mpg[i] > 30.00){
      status = "Economical";
    }
    avg /= 5;
    cout << cars[i] << "\t" << mpg[i] << "\t" << status << "\n" ;
  }
    cout << "Average: " << avg << endl;
}

int main(){
  string cars[] = {"Car A", "Car B", "Car C", "Car D", "Car E"};
  double mpg[] = {23.4, 83.2, 45.2, 19.8, 48.2};
  int size = 5;
  displayCarDetails(cars, mpg, size);
  return(0);
}
