// Please try to write a program including the main program and a function 
// that can return n! and Σ 1~n at the same time
// And change it to no error even if no argument is added when calling (let n be 0)

#include<iostream>
using namespace std;

// function
void return2num(int n, int *factRst, int *sumRst) {
     *factRst = 1;
     *sumRst = 0;
     for (int i = 1; i <= n; i++)
     {
        *factRst *= i;
        *sumRst += i;
     }
}

int main(){
    int n,factRst,sumRst;
    cin >> n;
    return2num(n,&factRst,&sumRst);
    cout << factRst << endl << sumRst << endl;
    return 0;
}



