#include <iostream>
using namespace std;

int main() {

    long long n;
    cin >> n;

    long long x, mx = 0;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(x > mx){
            mx = x;
        }
    }

    cout << mx << endl;
    return 0;
}
