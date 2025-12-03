//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
 
int main() {

long long a,b,c;
cin>>a>>b>>c;
if(a>=b && a>=c){
  
    if(b>=c){
        cout<<c<<" ";
    }else{
        cout<<b<<" ";
    }
      cout<<a;
}else if(b>=a && b>=c){
   
    if(a>=c){
        cout<<c<<" ";
    }else{
        cout<<a<<" ";
    }
      cout<<b;
}else{
  
    if(a>=b){
        cout<<b<<" ";
    }else{
        cout<<a<<" ";
    }
      cout<<c;
}

 
   
    return 0;

   
}