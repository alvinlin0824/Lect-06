// Please write a program that allows the user to input an integer n and calculate the result of n factorial.
// This program must include the main program and the n! function fact that can calculate 1*2*3...*n in the same program file.
// And call this function to use this function to calculate the result, and print this return value in the program, 
// please ensure that this function can be used repeatedly without errors

#include<iostream>
using namespace std;

// function
int fact(int n){
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product *= i;       
    }
    return product;
}

int main(){
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}