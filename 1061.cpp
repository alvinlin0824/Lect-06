// Please write a program that allows the user to input an integer n greater than 0 
// and calculate the result of adding 1 to n
// This program must include the main program and a function sum1 that can calculate 1+2+3...+n
#include<iostream>
using namespace std;

// function
int sum1(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;       
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << sum1(n);
    return 0;
}