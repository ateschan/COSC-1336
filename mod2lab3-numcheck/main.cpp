//Addison Teschan
//1/26/2024
//This program checks the number's signage using contitionals

#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "What is the number: " << endl;
    cin >> num;
    if (num > 0){
        cout << "The number is positive" << endl;
    }
    else if (num < 0){
        cout << "The number is negative" << endl;
    }
    else{
        cout << "The number is zero" << endl;
    }
    return 0;
}
