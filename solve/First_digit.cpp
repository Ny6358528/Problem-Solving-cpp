//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
 
int main() {
  int a;
    cin>>a;
  a=a/1000;
  a=a%10;
 
  if(a%2==0){
      cout<<"EVEN";   
    }else{
        cout<<"ODD";
    }
   
    return 0;
   
}