#include <iostream>
using namespace std;

int main(){
    int age;
    int month;
    cout << "Enter your age: ";
    cin >> age;
    month = age * 12;
    cout << "Your age in months is " << month << "." << endl;
    return 0;
}