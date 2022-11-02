#include <iostream>
using namespace std;
#include "swap.h"

// function split editing
// two nums swap

// // declaration
// void swap(int a, int b);
// // func def
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;

//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
// }

// 1. .h head file
// 2. .cpp source file
// 3. put declaration in head file
// 4. put defination in source file

int main() {

    int a = 10;
    int b = 20;

    swap(a, b);
    
    system("pause");

    return 0;
}