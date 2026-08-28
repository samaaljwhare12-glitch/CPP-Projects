#include <iostream>
using namespace std;

int main()
{
    int s;

    cout << "enter speed";
    cin >> s;

    if (s < 60) {
        cout << "safe";
    }
    else if (s >= 60 && s < 100) {
        cout << "normal";
    }
    else {
        cout << "over speed";
    }

    return 0;
}