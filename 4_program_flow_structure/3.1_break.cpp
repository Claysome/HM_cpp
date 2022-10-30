#include <iostream>
using namespace std;

int main() {

    // break
    // 1. switch 
    // cout << "please select difficulty" << endl;
    // cout << "1. normal" << endl;
    // cout << "2. median" << endl;
    // cout << "3. hard" << endl;

    // int select = 0; // save selection
    // cin >> select; // input

    // switch (select)
    // {
    // case 1:
    //     cout << "normal play" << endl;
    //     break;
    // case 2:
    //     cout << "median play" << endl;
    //     break;
    // case 3:
    //     cout << "hard play" << endl;   
    //     break;    
    // }

    // 2. loop
    // for (int i = 0; i < 10; i++)
    // {
    //     // if i = 5, break loop
    //     if (i == 5)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    // }

    // 3. nesting
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j ++)
        {   
            if (j == 5)
            {
                break;
            }
            cout << "* ";   // 5 * 10 *matrix
        }
        cout << endl;
    }

    system("pause");

    return 0;
}