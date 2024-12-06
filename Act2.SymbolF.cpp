#include <iostream>
using namespace std;

int main() {
    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 1) {
            cout << " ";
        }
        for (int j = 0; j < 7; j++) {
            cout << symbol << " ";
        }
        cout << endl;
    }

    return 0;
}
