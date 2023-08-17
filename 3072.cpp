// permutation application
// The number of combinations of taking m out of n different objects without repetition
// This program must include the main program and define a function as C(n,m) and return an integer

#include<iostream>
using namespace std;

// function
int C(int n, int m){
    int numerator = 1;
    int denominator = 1;
    int denominator1 = 1;
    for (int i = 1; i <= n; i++)
    {
        numerator *= i;       
    }
    
    for (int i = 1; i <= m; i++)
    {
        denominator *= i;       
    }

    for (int i = 1; i <= n-m; i++)
    {
        denominator1 *= i;       
    }

    return numerator/(denominator1*denominator);
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << C(n,m);
    return 0;
}