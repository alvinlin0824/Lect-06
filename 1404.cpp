// Ask the user to enter a number
// Python users please use the module "math" to calculate:
// (1) This number is squared after the root sign (cubic power).
// (2) This number is regarded as the diameter of a circle, and the area of ​​the circle is calculated. (radius radius pi)

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

// function
void retunr2(double n, double *n1, double *n2) {
     
     *n1 = pow(pow(n,0.5),3);
     *n2 = M_PI * pow(n/2,2);
}

int main(){
    double n, n1,n2;
    cin >> n;
    cout << fixed;
    cout << setprecision(2);
    // call by address
    retunr2(n,&n1,&n2);
    cout << n1 << endl << n2;
    return 0;
}