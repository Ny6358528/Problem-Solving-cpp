#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double mymum1 = (a * b) / c;
    long long mymum2 = mymum1;

    double withoutdec_res = mymum1 - mymum2; 
    if (withoutdec_res > 0) {
        cout << "double" << endl;
    }
    else if (mymum1 <= 2147483647) {
        cout << "int" << endl;
    }
    else {
        cout << "long long" << endl;
    }

    return 0;
}
