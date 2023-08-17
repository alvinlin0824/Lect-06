// permutation application
// The number of permutations and combinations of taking m out of n different objects without repetition
// This program must contain the main program and define two functions

#include<iostream>
using namespace std;

// function
int P(int n, int m){
    int numerator = 1;
    int denominator = 1;
    if (n >= m){
        for (int i = 1; i <= n; i++)
        {
            numerator *= i;       
        }
        
        for (int i = 1; i <= n-m; i++)
        {
            denominator *= i;       
        }
        return numerator/denominator;
    } else return 0;
  
}

// function
int C(int n, int m){
    int numerator = 1;
    int denominator = 1;
    int denominator1 = 1;
    if (n >= m){
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
    } else return 0;
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << P(n,m) << endl << C(n,m);
    return 0;
}