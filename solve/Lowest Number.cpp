#include <iostream>
using namespace std;

int main() {
    long long size;
    cin >> size;
    long long arr[size],min=arr[0],pos=1;
   
    for(int i=0;i<size;i++){
        cin>>arr[i];
     
        
    }
    for(int i=0;i<size;i++){
      if(arr[i]<min){
          min=arr[i];
          pos=i+1;
      }}
      cout<<min<<" "<<pos;
      return 0;
    }