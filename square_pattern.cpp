#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 7; i++) {
        if (i <= 4) {
            cout << (i * i) << " ";
        } else {
            int val = 8 - i;
            cout << (val * val) << " ";
        }
    }

    cout << endl;

    return 0;
}