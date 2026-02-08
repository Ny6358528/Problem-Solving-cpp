#include <iostream>
using namespace std;

int main() {
    long long size;
    cin >> size;
    long long arr[size];
   
    for(int i=0;i<size;i++){
        cin>>arr[i];
     
        
    }
    for(int i=0;i<size;i++){
          if(arr[i]>0){
            cout<<1<<" ";
        }else if(arr[i]<0){
            cout<<2<<" ";
        }else{
            cout<<0<<" ";
        }
    }
    
   
    



    return 0;
}
