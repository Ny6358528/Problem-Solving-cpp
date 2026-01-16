#include <iostream>
using namespace std;

int main() {
    int x;
    cin >>x;
    
    int h = x / 3600, m = (x % 3600) / 60, s = (x % 3600) % 60;    
    cout << h << " " << m << " " << s;
    
    return 0;
}
