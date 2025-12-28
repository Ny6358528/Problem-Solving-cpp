#include <iostream>
using namespace std;

int main() {
    long long n, m;

    while (true) {
        cin >> n >> m;

        if (n <= 0 || m <= 0) {
            break;
        }

        long long start = n < m ? n : m;
        long long end = n > m ? n : m;
        long long sum = 0;

       
        for (long long i = start; i <= end; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}
