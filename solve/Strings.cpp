#include <iostream>
#include <string>
using namespace std;

int main() {
    string w1;
  cin >> w1;
    string w2;
    cin >> w2;
    int len1 = w1.size();
    int len2 = w2.size();
    cout << len1 << " " << len2 << endl;
    cout << w1+w2 << endl;
  char temp=w1[0];
  w1[0]=w2[0];
    w2[0]=temp;
    cout << w1 << " " << w2;

}