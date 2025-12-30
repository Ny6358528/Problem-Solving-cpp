#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long x, y, sum = 0;
        cin >> x >> y;

        long long start, end;
        if (x > y) {
            start = y;
            end = x;
        } else {
            start = x;
            end = y;
        }
        for (long long i = start + 1; i < end; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
