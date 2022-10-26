#include <iostream>
using namespace std;

int main(){

    //1. front increment
    int a = 10;
    ++a; // a+1
    cout << "a = " << a << endl;

    //2. post increment
    int b = 10;
    b++; // b+1
    cout << "b = " << b << endl;

    //3. front / post diff
    // front -> variable+1 -> operate
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2 = " << a2 << endl;
    cout << "b2 = " << b2 << endl;

    // post -> operate -> variable+1
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << "a3 = " << a3 << endl;
    cout << "b3 = " << b3 << endl;
   
    system("pause");

    return 0;
}