#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;
    
    int x = h * 3600 + m * 60 + s;
    cout << x;
    
    return 0;
}
