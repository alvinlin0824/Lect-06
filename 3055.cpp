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
string code(int n) {
     char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
     int remainder = n % 26;
     int quotient = n / 26;
     
     string repeat;
     // repeat
     for (int i = 0; i <= quotient; i++)
     {
        repeat += alphabet[remainder - 1];
     }
    
     return repeat;
}

int main(){
    
    int arr;
    cin >> arr;
    // call by address
    cout << code(arr);
    return 0;
}

