//Addison Teschan
//1/26/2024
//Final grade evaluation based on grades and weights.

#include <iostream>
using namespace std;


int main()
{
  double quiz, test, exam, homework;
  cout << "What grade did you revieve on the quiz?" << endl;
  cin >> quiz;
  cout << "What grade did you recieve on the test?" << endl;
  cin >> test;
  cout << "What grade did you recieve on the exam?" << endl;
  cin >> exam;
  cout << "What grade did you recieve on the homework?" << endl;
  cin >> homework;
  double final_grade = (quiz * 0.15) + (test * 0.25) + (exam * 0.25) + (homework * 0.35);
  cout << "Your final grade is " << final_grade << endl;
  return 0;
}


