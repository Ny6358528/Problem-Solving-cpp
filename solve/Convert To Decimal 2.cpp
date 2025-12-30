#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long t;
cin>>t;
while (t--){
    long long n;
    cin>>n;
    long long c=0;
    while (n!=0){
        if (n%2!=0){
            c++;
        }
        n/=2;
    }
    long long ans=0,p=1;
    for (int i = 0; i < c; ++i){
        ans+=p;
        p*=2;
    }
    cout<<ans<<endl;
}

    return 0;
}
