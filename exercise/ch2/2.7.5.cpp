#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius){
    return 1.8 * celsius + 32.0;
}

int main(){
    float celsius;
    float fahrenheit;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
    return 0;
}
