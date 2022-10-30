#include <iostream>
using namespace std;

int main() {

    //continue

    for (int i = 0; i <= 100; i++)
    {
        // if odd print, even doesnot print
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    system("pause");

    return 0;
}