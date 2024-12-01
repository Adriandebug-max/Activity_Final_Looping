#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 1) {
            cout << " ";
        }
        for (int j = 0; j < 10; j++) {
            cout << "^" << " ";
        }
        cout << endl;
    }

    return 0;
}