#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n-1-i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
