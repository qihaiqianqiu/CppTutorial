# include <iostream>
using namespace std;

int main(){
    cout << "Please enter a value in long, and I will convert it to yards." << endl;
    float long_value;
    cin >> long_value;
    cout << long_value << " long = " << long_value * 220 << " yards." << endl;
    return 0;
}