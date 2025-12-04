//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
 
 
int main() {
   int a,b;
   char s;
   cin>>a>>s>>b;
   if(s=='>'){
       if(a>b){
           cout<<"Right";
       }else{
           cout<<"Wrong";
       }
   }else if(s=='<'){
       if(a<b){
           cout<<"Right";
       }else{           cout<<"Wrong";
       }
   }else if(s=='='){
         if(a==b){
              cout<<"Right";
         }else{
              cout<<"Wrong";
         }
   }
 
   
    return 0;
   
}