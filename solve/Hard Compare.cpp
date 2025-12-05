//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
#include <cmath>

 
 
int main() {
double a,b,c,d;
cin>>a>>b>>c>>d;
double p1 = b * log(a);
double p2 = d * log(c);

if(p1>p2){
    cout<<"YES";
}else{
    cout<<"NO";
}
    return 0;
   
}