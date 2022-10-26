#include <iostream>
using namespace std;

//1. marco const #define
//2. const variable 

//1. marco const
#define Day 7

int main(){

    // Day = 14; // Day is marco const, cant be modified
    cout << "a week has: " << Day << " days" << endl;
    
    // 2. const variable, cant be modified
    const int month = 12;
    cout << "a year has: " << month << " months" << endl;
    
    system("pause");

    return 0;
}