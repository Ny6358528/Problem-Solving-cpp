#include <iostream>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long sum = 0;
    for(long long i = 1; i <= n; i++){
        long long temp = i;
        int sumDigits = 0;
        while(temp > 0){
            sumDigits += temp % 10;
            temp /= 10;
        }
        if(sumDigits >= a && sumDigits <= b){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
