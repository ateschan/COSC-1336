//Addison Teschan
//Feb 26 2024
//Using structs in c++

#include<iostream>

using namespace std;

struct Student{
  string firstname;
  string lastname;
  double gpa;
  string major;
};

void dataOutput(Student stu);

int main(){
  Student student;
  cout << "Firstname? " << endl;
  cin >> student.firstname;
  cout << "Lastname? " << endl;
  cin >> student.lastname;
  cout << "GPA? " << endl;
  cin >> student.gpa;
  cout << "Major? " << endl;
  cin >> student.major;

  dataOutput(student);
  
  return 0;
}

void dataOutput(Student stu){
  cout << "Firstname: " << stu.firstname << "\nLastname: " << stu.lastname << "\nGpa: " << stu.gpa << "\nMajor: " << stu.major << endl;
};

