#include <iostream>
using namespace std;

int main() {

    // reverse array
    //1. init array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "before reverse: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    //2. reverse array
    int left = 0; // start index
    int right = sizeof(arr) / sizeof(arr[0]) - 1; // end index

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    //3. print reversed array
    cout << "reverse array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
       
    system("pause");

    return 0;
}