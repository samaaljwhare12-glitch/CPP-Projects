#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter num: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Positive";
    }
    else if (num < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Zero";
    }

    return 0;
}