#include <iostream>
using namespace std;

int main() {
    long long n, r;
    cin >> n >> r;

    long long sum = n * (2 + (n - 1) * r) / 2;
    cout << sum << endl;

    return 0;
}
