// Today there is an encryption method for converting abc into alphabetical order.
// like:
// a --> 1
// b --> 2
// c --> 3
// ...
// ...
// ...
// y --> 25
// z --> 26
// And if the same word appears continuously, it will become:
// aa --> 27
// bb --> 28
// cc --> 29
// ...
// ...
// ...
// yy --> 51
// zz --> 52

// aaa --> 53
// bbb --> 54
// ccc --> 55
// ...
// ...
// ...
// yyy --> 77
// zzz --> 78


// Now you will get a string of numbers separated by "-", please try to decipher the numbers into English words.
// Such as: 1-42-12-5 will get apple

#include<iostream>
#include<string>
using namespace std;

// function
void code(int n) {
     char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
     int remainder = n % 26;
     int quotient = n / 26;
     alphabet[remainder];
}

int main(){
    // char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    
    // int i = 1;
    // // for (int i = 0; i < 4; i++)
    // // {
    //      cout << alphabet[i] << endl;
    // // }

    int n;
    cin >> n;
    // call by address
    cout << char(n) << endl;
    return 0;
}