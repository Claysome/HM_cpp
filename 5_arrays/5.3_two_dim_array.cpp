#include <iostream>
using namespace std;

int main() {

    //def two dim
    //1. dtype arrname[row][col]
    // int arr[2][3];
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[0][2] = 3;
    // arr[1][0] = 4;
    // arr[1][1] = 5;
    // arr[1][2] = 6;

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << endl;
    //     }
    // }

    //2.dtype arrname[row][col] = {{num1, num2}, {num3, num4}};
    // int arr[2][3] = 
    // {
    //     {1, 2, 3},
    //     {4, 5, 6}
    // };
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }  

    //3. dtype arrname[row][col] = {num1, num2, num3, ...}
    // int arr[2][3] = {1, 2, 3, 4, 5, 6};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }  
    //4.dtype arrname[][col] = {num1, num2, num3 ...}
    int arr4[][3] = {1, 2, 3, 4, 5, 6};


    system("pause");

    return 0;
}