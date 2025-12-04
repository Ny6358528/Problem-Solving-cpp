//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
 
 
int main() {
 double n;
    cin>>n;
    if(n==int(n)){
        cout<<"int "<<(int)n  ;
    }else{
        cout<<"float "<< int(n)<<" "<< n-int(n);
    }
   
    return 0;
   
}