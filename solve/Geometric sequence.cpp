#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    long long sum = (pow(q, n) - 1) / (q - 1);
    cout << sum << endl;

    return 0;
}
