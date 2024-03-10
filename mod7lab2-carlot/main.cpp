#include<iostream>

using namespace std;


struct Car{
  string make;
  string model;
  int year;
  double price;
};

void displayData(Car car[]);
void totalValue(Car car[]);

int main(){
  Car car1 = {"honda", "accord", 2023, 40000.00}; 
  Car car2 = {"honda", "accord", 2024, 50000.00}; 
  Car car3 = {"honda", "accord", 1999, 80000.00}; 
  Car car4 = {"honda", "accord", 9000, 20000.00}; 
  Car car5 = {"honda", "accord", 2000, 90.00}; 
  
  Car carArr[] = {car1, car2, car3, car4, car5};
  displayData(carArr);
  totalValue(carArr);

  return 0;
}

void displayData(Car car[]){
  for (int i = 0; i < 5; i++){
    cout << "Car #" << i + 1 << " make: " << car[i].make << " model: " << car[i].model << " year: " << car[i].year << " price: " << car[i].price << endl;
  }
}

void totalValue(Car car[]){
  double sum = 0;
  for (int i = 0; i < 5; i++){
    sum += car[i].price;
  }
  cout << "price of all cars: $" << sum << endl;
}

