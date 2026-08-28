#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Factorial = " << factorial << endl;

    return 0;
}