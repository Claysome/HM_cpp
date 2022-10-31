#include <iostream>
using namespace std;

int main() {

    // two dims stats case
    int score[3][3] = 
    {
        {100, 100, 100},
        {90, 50, 100},
        (60, 70, 80),
    };

    // sum score for each person
    for (int i = 0; i < 3; i++)
    {   
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += score[i][j];
            // cout << score[i][j] << " ";
        }
        cout << "sum score of " << i+1 << " is " << sum << endl;
    }


    system("pause");

    return 0;
}