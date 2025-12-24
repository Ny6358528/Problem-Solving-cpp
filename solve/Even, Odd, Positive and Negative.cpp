#include <iostream>
using namespace std;

int main() {

long long n;
cin>>n;
long long b,even=0,odd=0,positive=0,negative=0;

for(int i=1;i<=n;i++){
    cin>>b;
   if(b%2==0){
       even++;
   }else{
       odd++;
   }
   if(b>0){
       positive++;
   }else if(b<0){
       negative++;
   }
}

cout<<"Even: "<<even<<endl;
cout<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<positive<<endl;
cout<<"Negative: "<<negative<<endl;


return 0;
}


