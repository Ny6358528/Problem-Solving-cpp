#include <iostream>
using namespace std;

int main() {

char s;
int x,y;

cin>>s>>x;
for(int i=1;i<=x;i++){
    cin>>y;
    if(y>0){
        for(int j=1;j<=y;j++){
            cout<<s;
        }
        cout<<endl;
    }
}

}
