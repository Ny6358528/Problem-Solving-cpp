#include <iostream>
using namespace std;

int main() {
    long long size;
    cin >> size;
    long long arr[size];
     long long x,index=-1;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
    cin>>x;

  

    for(int i=0;i<size;i++){
        if(arr[i]==x){
            index=i;
            break;
        }

    }
    cout<<index;



    return 0;
}
