/*
single char
char ch = 'a';   1 byte

*/

#include <iostream>
using namespace std;

int main(){

    // 1. char create
    char ch = 'a';
    cout << ch << endl;

    // 2. char mem size
    cout << "occupied mem size of char: " << sizeof(ch) << endl;

    // 3. common error
    // char ch = "b", // 'b'
    // char ch = 'abc' // only one char

    // char convert into ASCII code
    cout << int(ch) << endl;
    // a - 97
    // A - 65
    
    system("pause");

    return 0;
}
