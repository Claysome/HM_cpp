#include <iostream>
using namespace std;

// typical formats
// 1. param 0 return 0
void test1()
{
    cout << "test_format_1" << endl;
}
// 2. param 1 return 0
void test2(int a)
{
    cout << "test_format_2 a = " << a << endl;
}
// 3. param 0 return 1
int test3()
{   

    cout << "test_format_3" << endl;
    return 1000;
}
// 4. param 1 return 1
int test4(int a)
{   

    cout << "test_format_4: " << a << endl;
    return a;
}

int main() {

    test1();

    int a = 9;
    test2(a);

    int c = test3();
    cout << c << endl;

    int d = test4(9);

    system("pause");

    return 0;
}