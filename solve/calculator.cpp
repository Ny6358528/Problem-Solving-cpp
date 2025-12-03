//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
 
int main() {

long long a,b;
char s;
cin>>a>>s>>b;
switch(s){
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
} 
   
    return 0;

   
}