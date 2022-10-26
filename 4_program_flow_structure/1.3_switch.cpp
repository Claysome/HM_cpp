#include <iostream>
using namespace std;

int main() {

    // switch
    // movie rating
    // 10 - 9 classic
    // 8 - 7 good
    // 6 - 5 chill
    // below 5 shit

    //1. hint rating
    cout << "please input movie rating: " << endl;

    //2. input rating
    int score = 0;
    cin >> score;
    cout << "your rating score: " << score << endl;

    //3. print rating output
    switch (score)
    {
        case 10:
            cout << "classic" << endl;
            break; // exit curr branch
        case 9:
            cout << "classic" << endl;
            break; // exit curr branch
        case 8:
            cout << "good" << endl;
            break; // exit curr branch
        case 7:
            cout << "good" << endl;
            break; // exit curr branch
        case 6:
            cout << "chill" << endl;
            break; // exit curr branch
        case 5:
            cout << "chill" << endl;
            break; // exit curr branch
        default:
            cout << "shit" << endl;
            break; // exit curr branch
    }

    // if vs switch
    //switch cons: assert only int or string, could not be range
    //switch pros: structure clear, exec efficiency
    
    return 0;
}