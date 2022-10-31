#include <iostream>
using namespace std;

int main() {

    //1. init 5 pigs array
    int arr[5] = {300, 350, 200, 400, 250};

    //2. find max
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    //3. print max
    cout << "max pigs: " << max << endl;

    system("pause");

    return 0;
}