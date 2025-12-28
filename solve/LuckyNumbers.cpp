#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    bool found = false;

    for (long long i = a; i <= b; i++) {
        long long n = i;
        bool lucky = true;

        while (n > 0) {
            long long num = n % 10;
            if (num != 4 && num != 7) {
                lucky = false;
                break;
            }
            n /= 10;
        }

        if (lucky) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) cout << -1;

    return 0;
}
