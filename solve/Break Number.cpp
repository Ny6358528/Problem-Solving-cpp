#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long maxF = 0; 

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        int f = 0; 
        while (x % 2 == 0) {
            x /= 2;
            f++;
        }

        if (f > maxF) {
            maxF = f;
        }
    }

    cout << maxF << endl;
    return 0;
}
