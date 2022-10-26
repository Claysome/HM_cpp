#include <iostream>
using namespace std;

int main() {

    // select structure; single if 
    // input grade, if grade > 600, first class, output
    // if grade > 500, 2.1 degree
    // if grade > 400, 2.2 degree
    // else, not in degree, output

    //1. input grade
    int score = 0;
    cout << "please input grade: " << endl;
    cin >> score;

    //2. print grade
    cout << "input grade: " << score << endl;

    //3. if grade > 600, if true, output; if not, print not in first class
    //note: if() no need add ;
    if(score > 600)
    {
        cout << "congrats to first class" << endl;
        if(score > 700)
        {
            cout << "congrats to Camb" << endl;
        }
        else if(score > 650)
        {
            cout << "congrats to Oxford" << endl;
        }
        else
        {
            cout << "congrats to IC" << endl;
        }
    }
    else if(score > 500)
    {
        cout << "congrats to 2.1 degree" << endl;
    }
    else if(score > 400)
    {
        cout << "congrats to 2.2 degree" << endl;
    }
    else
    {
        cout << "not in degree" << endl;
    }  

    system("pause");

    return 0;
}
