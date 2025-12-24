#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int x = a / 10;
    int y = a % 10;

    if (y != 0 && x % y == 0) {
        cout << "YES";
    }
    else if (x != 0 && y % x == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
