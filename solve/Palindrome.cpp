#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long original = n;  
    long long rev = 0;
    while (n > 0) {
        int digit = n % 10;       
        rev = rev * 10 + digit;   
        n = n / 10;                
    }
    cout << rev << endl;
    if (rev == original)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
