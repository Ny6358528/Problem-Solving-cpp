//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
 
 
int main() {
   long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long result=(a%100*b%100*c%100*d%100);
    if(result%100<10){
        cout<<"0"<<result%100;
    }else{
        cout<<result%100;}
 
   
    return 0;
   
}