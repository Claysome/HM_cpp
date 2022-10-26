#include <iostream>
using namespace std;
#include <ctime>

int main() {

    // rand seed
    srand((unsigned int)time(NULL));

    //1. gen rand num
    int num = rand()%100 + 1; // rand()%100 + 1 gen 0 + 1 ~ 99 + 1 rand num
    // cout << num << endl;

    //2. guess num
    int var = 0; // input guess num
    
    while (1)
    {   
        cout << "input guess num: " << endl;
        cin >> var;

        //3. assert guess
        if (var > num)
        {
            cout << "guess larger than num" << endl;
        }
        else if (var < num)
        {
            cout << "guess smaller than num" << endl;
        }
        else
        {
            cout << "congrats" << endl;
            break;
        }
    }
    
    //right -> break
    //false -> hint greater or smaller -> return step 2

    system("pause");

    return 0;
}