#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

 cout << setprecision(10) << fixed;
 double x1,y1,x2,y2,distance;
 cin>>x1>>y1>>x2>>y2;
 distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout<<distance;

}
