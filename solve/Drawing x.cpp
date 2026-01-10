#include <iostream>
using namespace std;

int main() {

    long long counter;
    cin >> counter;

    for (int i = 0; i < counter; i++) {
        for (int j = 0; j < counter; j++) {

            if (i == j && i != counter / 2 && j != counter / 2) {
                cout << "\\";
            }
            else if (i == counter / 2 && j == counter / 2) {
                cout << "X";
            }
            else if (j != counter / 2 && i == (counter - 1) - j) {
                cout << "/";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
