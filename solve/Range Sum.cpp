#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while(t--) {
        long long L, R;
        cin >> L >> R;

        long long sum = (R * (R + 1)) / 2 - ((L - 1) * L) / 2;
        cout << sum << endl;
    }

    return 0;
}
