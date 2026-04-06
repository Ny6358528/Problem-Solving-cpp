#include <iostream>
#include <string>
using namespace std;

int main() {
    string stringtoCount;
   cin >> stringtoCount;
 int sum=0;
    for(int i=0;i<stringtoCount.size();i++){
         sum+=(stringtoCount[i]-'0');
    }
    cout<<sum;}



