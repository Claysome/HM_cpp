#include <iostream>
using namespace std;

int main(){

    bool flag = true;
    cout << flag << endl; // 1

    flag = false;
    cout << flag << endl; // 0

    cout << "size of bool = " << sizeof(flag) << endl; // 1 byte

    system("pause");

    return 0;
}