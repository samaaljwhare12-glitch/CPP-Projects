#include <iostream>
using namespace std;

int main() {
    int mulNum;

    cout << "Enter a number: ";
    cin >> mulNum;

    for (int i = 1; i <= 10; i++) {
        cout << (mulNum * i) << " = " << mulNum << " * " << i << endl;
    }

    return 0;
}