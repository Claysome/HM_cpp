#include <iostream>
using namespace std;

int main() {

    // array

    /*
        1.dtype arrayname[len];
        2.dtype arrayname[len] = {num1, num2 ...}
        3.dtype arrayname[] = {num1, num2 ...}        
    */

    //1.dtype arrayname[len];
    // int arr[5];
    //assign values
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    //visit
    // cout << arr[0] << endl;

    //2.dtype arrayname[len] = {num1, num2 ...}
    //init stage, fillna(0) automatically
    // int arr2[5] = {10, 20, 30, 40 , 50};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr2[i] << endl;
    // }
    
    //3.dtype arrayname[] = {num1, num2 ...} 
    int arr3[] = {50, 40, 30, 20, 10};
    //must have init len
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << endl;
    }

    system("pause");

    return 0;
}