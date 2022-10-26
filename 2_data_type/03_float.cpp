/*
float 4 bytes   7 digits
double 8 bytes  15~16 digits
*/

#include <iostream>
using namespace std;

int main(){
    
    // 1. float
    // 2. double
    // only print default 6 digits

    float f1 = 3.1415926f;

    cout << "f1 = " << f1 << endl;

    double d1 = 3.1415926;
    cout << "d1 = " << d1 << endl;  

    // float and double occupied mem size
    cout << "float occupied size: " << sizeof(float) << endl; // 4bytes
    cout << "double occupied size: " << sizeof(double) << endl; // 8bytes
    
    // sci
    float f2 = 3e2; // 3*10^2
    cout << "f2 = " << f2 << endl;

    float f3 = 3e-2; // 3*10^-2
    cout << "f3 = " << f3 << endl;   
     
    return 0;
}