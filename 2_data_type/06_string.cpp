#include <iostream>
using namespace std;
#include <string>

int main(){

    //1. C style
    //note char str[] = "";
    char str[] = "hello world";
    cout << str << endl;

    //2. C++ style
    //note #include <string>
    string str2 = "hello";
    cout << str2 << endl;

    system("pause");

    return 0;
}