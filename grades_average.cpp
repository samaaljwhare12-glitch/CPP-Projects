#include <iostream>
using namespace std;

int main()
{
    int math, physics, english;

    cout << "Enter math mark: ";
    cin >> math;

    cout << "Enter physics mark: ";
    cin >> physics;

    cout << "Enter english mark: ";
    cin >> english;

    double mark = (math + physics + english) / 3.0;

    if (mark < 50)
    {
        cout << "Fail";
    }
    else if (mark < 70)
    {
        cout << "Pass";
    }
    else if (mark < 90)
    {
        cout << "Good";
    }
    else
    {
        cout << "Excellent";
    }

    return 0;
}