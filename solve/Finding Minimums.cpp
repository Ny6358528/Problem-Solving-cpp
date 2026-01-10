#include <iostream>
using namespace std;

int main() {

    int size, squ;
    cin >> size >> squ;

    int mn;
    int flag = 1;
    int counter = 0;

    for (int i = 1; i <= size; i++) {
        int value;
        cin >> value;

        if (flag) {
            mn = value;
            flag = 0;
        } else {
            if (value < mn) {
                mn = value;
            }
        }

        counter++;

        if (counter == squ || i == size) {
            cout << mn << " ";
            counter = 0;
            flag = 1;
        }
    }

    return 0;
}
