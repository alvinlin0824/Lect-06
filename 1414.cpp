// It is known that the formula for calculating the volume of a sphere is: (4/3)πr^3
// (four-thirds of the circumference, the cube of the radius of the sphere (3rd power))

#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

// function
double sphere(double r) {
     return (4 * M_PI * pow(r,3))/3;
}

int main(){
    double n;
    cin >> n;
    cout << fixed;
    cout << setprecision(3);
    cout << sphere(n);
    return 0;
}