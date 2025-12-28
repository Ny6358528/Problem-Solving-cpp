#include <iostream>
using namespace std;

int main() {

long long a,b;
cin>>a>>b;
long long c=a%b;
while(c!=0){
    a=b;
    b=c;
    c=a%b;
}
cout<<b;


}
