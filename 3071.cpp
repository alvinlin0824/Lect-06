// permutation application
// The number of permutations in which m objects are taken out without repetition from n different objects
// This program must include the main program and define a function as P(n,m) and return an integer

#include<iostream>
using namespace std;

// function
int P(int n, int m){
    int numerator = 1;
    int denominator = 1;
    for (int i = 1; i <= n; i++)
    {
        numerator *= i;       
    }
    
    for (int i = 1; i <= n-m; i++)
    {
        denominator *= i;       
    }

    return numerator/denominator;
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << P(n,m);
    return 0;
}