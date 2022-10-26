/*
sizeof(int) -> return memory size
*/

#include <iostream>
using namespace std;

int main(){

    short num1 = 10;        // 2 bytes
    int num2 = 10;          // 4 bytes
    long num3 = 10;         // 8 bytes
    long long num4 = 10;    // 8 bytes

    cout << "short occupied memory size: " << sizeof(num1) << endl;
    cout << "int occupied memory size: " << sizeof(num2) << endl;
    cout << "long occupied memory size: " << sizeof(num3) << endl;
    cout << "longlong occupied memory size: " << sizeof(num4) << endl;

    system("pause");

    return 0;
}