//Addison teshcan
//February 29 2024
//
//Alamo Colleges student struct
//
//
#include<iostream>

using namespace std;

struct Student{
  string fullname;
  string bannerID;
  int age;
  double GPA;
  string email;
  string phone;
};



int main(){
 int n;
 cout << "How many students?" << endl;
 cin >> n;
 Student arr[n];
 for (int i = 0; i < n; i++){
  string fullname, bannerID, email, phone;
  int age;
  double GPA;
  cout << "-------Student #" << i << "-------" << endl;
  cout << "Fullname: ";
  cin >> fullname;
  cout << "BannerID: ";
  cin >> bannerID;
  cout << "Email: ";
  cin >> email;
  cout << "Phone #: ";
  cin >> phone;
  cout << "Age: ";
  cin >> age;
  cout << "GPA: ";
  cin >> GPA;

  arr[i] = {fullname, bannerID, age, GPA, email, phone};
 } 

 for (int i = 0; i < n; i++){
   cout << "Fullname: " << arr[i].fullname << "\nBannerID: " << arr[i].bannerID << "\nEmail: " << arr[i].email << "\nPhone: " << arr[i].phone << "\nAge: " << arr[i].age << "\nGPA: " << arr[i].age << "\nPhone #: " << arr[i].phone << "\n" << endl;
 }

 double GPASUM = 0.0;
 for(int i = 0; i < n; i++){
    GPASUM += arr[i].GPA;
 }
 cout << "sum of GPA: " << GPASUM << endl;
  
  return 0;
}
