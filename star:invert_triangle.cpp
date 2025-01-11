#include <iostream>
using namespace std;
int pattern(int n){
    for(int i=n;i>=0;i--){
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main() {
    int n;
    cout<<"enter your number of rows:";
    cin>>n;
    pattern(n);
    return 0;
}
