#include <iostream>
using namespace std;

int main() {

    // nesting loop print 9 * 9
    for (int i = 1; i <= 9; i++)
    {   
        for (int j = 1; j <= i; j++)
        {
        cout << j * i << " ";
        }
        cout << endl;
    }

    system("pause");

    return 0;
}