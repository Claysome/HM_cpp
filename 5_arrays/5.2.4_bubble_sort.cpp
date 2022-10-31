#include <iostream>
using namespace std;

int main() {

    // bubble sorting
    int arr[] = {4, 2, 3, 5, 6, 7, 1, 9, 8};

    cout << "before sorting: " << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // sorting
    // total times sorting len(nums) - 1
    for (int i = 0; i < 9 - 1; i++)
    {   
        // times = len(nums) - i - 1
        for (int j = 0; j < 9 - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // after sorting
    cout << "after sorting: " << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");

    return 0;
}