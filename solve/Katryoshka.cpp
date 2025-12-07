//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
 
int main() {
  long long e,m,b;
    cin>>e>>m>>b;
    long long res=min(e,min(m,b));
    e-=res;
    m-=res;
    b-=res;
    res+= min(e/2,b);
    cout<<res;

    
    return 0;
   
}