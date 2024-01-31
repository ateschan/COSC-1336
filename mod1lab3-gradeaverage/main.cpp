#include <iostream>

using namespace std;
int main (int argc, char *argv[]) {
  int grade1 = 1;
  int grade2 = 7;
  int grade3 = 2;
  int grade4 = 9;
  int grade5 = 10;
  double avg = 0.0;
  cout << "Grade 1: " << grade1 << endl;
  cout << "Grade 2: " << grade2 << endl;
  cout << "Grade 3: " << grade3 << endl;
  cout << "Grade 4: " << grade4 << endl;
  cout << "Grade 5: " << grade5 << endl;
  cout << "Grade average: " << ((grade1 + grade2 + grade3 + grade4 + grade5) / 5) << endl;
  return 0;
}
