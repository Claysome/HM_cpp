#include <iostream>
using namespace std;

// value passing
// def function -> two values swap

// if function does not need to return value, void
void swap(int num1, int num2)
{
    cout << "before swap: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "after swap: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

}

int main() {

    int a = 10;
    int b = 20;

    swap(a, b);
    
    system("pause");

    return 0;
}