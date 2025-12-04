//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
 
 
int main() {
   int a,b,c;
   char s,q;
   cin>>a>>s>>b>>q>>c;
  
     if(s=='+'&&q=='='){
      if(a+b==c){
          cout<<"Yes";
      }else{
          cout<<a+b;
      }}
      else if(s=='-'&&q=='='){
          if(a-b==c){
              cout<<"Yes";
          }else{
              cout<<a-b;
          }
      } else if(s=='*'&&q=='='){
          if(a*b==c){
              cout<<"Yes";
          }else{
              cout<<a*b;
          }
      
      }
 
   
    return 0;
   
}