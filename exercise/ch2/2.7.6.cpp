#include <iostream>
using namespace std;

double lyToAu(double ly){
    return 63240 * ly;
}
s
int main(){
    double ly;
    double au;
    cout << "Enter the number of the light years: ";
    cin >> ly;
    au = lyToAu(ly);
    cout << ly << " light years = " << au << " astronomical units." << endl;
    return 0;
}
