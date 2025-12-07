//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
 
 
int main() {
   int a;
   cin>>a;

   int first_digit2=a/10;

   int sec_digit2=a%10;
   
   if(first_digit2%sec_digit2==0||sec_digit2%first_digit2==0){
    cout<<"YES";
   }else{
    cout<<"NO";
   }
    return 0;
   
}