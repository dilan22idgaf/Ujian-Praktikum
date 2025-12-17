#include <iostream>
using namespace std;

int main() {
    int b = 6;

    for (int i = b; i >= 1; i--) {
        for (int s = 0; s < b - i; s++) {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "'";
        }
        cout << endl;
    }
    return 0;
}