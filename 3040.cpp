// Want to know the celestial stems and earthly branches corresponding to the year, 
// such as: 2010 is the year of Gengyin.
// Heavenly Stems: ['A','B','C','D','E','Ji','Geng','Xin','Ren','Kui']
// Earthly Branches: ['Zi', 'Chou', 'Yin', 'Mao', 'Chen', 'Si', 'Noon', 'Wei', 'Shen', 'You', 'Xu', 'Hai' ]

// Calculated as follows:
// Celestial stem position=(AD year-3)/10 take the remainder
// Earthly branch position = (Year-3)/12 take the remainder

// Example: -3 for 2010, for 2007
// Tiangan=2007/10, take the remainder as 7 --> the 7th from the number of Tiangan is "Geng"
// Earthly Branches=2007/12 take the remainder as 3 --> the third one from the number of Earthly Branches is "Yin"

// Now we want to create a function: Python: def YEAR(lst), which must be passed in list. Each element in the list is a string of the first year of the Western New Year.
// C: void YEAR(int n, char lst[][5]), pass the string array into the YEAR function, n is the number of strings.
// Under the operation of the function, we can calculate the zodiac year of each element in each list.
// like:
// YEAR(['1993','1994','1894'])
// can be printed out in the function

#include<iostream>
using namespace std;

// function
void YEAR(int n) {
     char arr1[] = {'甲','乙','丙','丁','戊','己','庚','辛','壬','癸'};
}

int main(){
    int n,factRst,sumRst;
    cin >> n;
    return2num(n,&factRst,&sumRst);
    cout << factRst << endl << sumRst << endl;
    return 0;
}