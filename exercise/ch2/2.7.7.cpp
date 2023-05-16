#include <iostream>
using namespace std;
void printHM(int hour, int minute){
    cout << "Time: " << hour << ":" << minute;
}

int main(){
    int hour;
    int minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    printHM(hour, minute);
    return 0;
}