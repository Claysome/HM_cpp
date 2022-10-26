/*

trinomial operator

cond1 ? cond2 : cond3

if cond1 true: exec cond2
if cond1 false: exec cond3

*/
#include <iostream>
using namespace std;

int main() {
    // trinomial opr

    // a b c
    // a compare with b, greater one assign to c

    int a = 10;
    int b = 20;
    int c = 0;

    c = (a > b ? a : b);

    cout << "c = " << c << endl;

    // trinomial opr return variable, coule be assigned
    (a > b? a : b) = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    system("pause");

    return 0;
}