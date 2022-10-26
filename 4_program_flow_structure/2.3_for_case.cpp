#include <iostream>
using namespace std;

int main() {

    // 7 14 ..
    // 7 17 27 ..
    // 70 71 72 ..
    //1. input 1-100
    for (int i = 1; i <= 100; i++)
    {
        //2. magic num print 'skip'
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
        {
            cout << "duang!" << endl;
        }
        else 
        {
            cout << i << endl;
        }
    }

    system("pause");

    return 0;
}