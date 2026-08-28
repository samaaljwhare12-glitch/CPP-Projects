#include <iostream>
using namespace std;

int main()
{
    int temp;

    cout << "enter temp";
    cin >> temp;

    if (temp < 15) {
        cout << "cold";
    }
    else if (temp >= 15 && temp < 30) {
        cout << "warm";
    }
    else {
        cout << "hot";
    }

    return 0;
}