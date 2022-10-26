#include <iostream>
using namespace std;

int main() {

    // 3 pigs, find whose weight is largest

    //1. init 3 pigs' weights
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    //2. input 3 pigs' weights
    cout << "input A weight: " << endl;
    cin >> num1;

    cout << "input B weight: " << endl;
    cin >> num2;

    cout << "input C weight: " << endl;
    cin >> num3;

    cout << "A weight is: " << num1 << endl;
    cout << "B weight is: " << num2 << endl;
    cout << "C weight is: " << num3 << endl;

    //3. assert largest
    // A vs B
    if (num1 > num2) // A > B
    {
        if (num1 > num3) // A > C
        {
            cout << "A largest" << endl;
        }
        else // C > A
        {
            cout << "C largest" << endl;
        }
    }
    else if (num1 < num2) // A < B
    {
        if (num2 > num3) // B > C
        {
            cout << "B largest" << endl;
        }
        else // B < C
        {
            cout << "C largest" << endl;
        }
    }
    
    system("pause");

    return 0;

}