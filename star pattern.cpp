// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int row=4;
    int space=2*row-2;
    for(int i=1;i<=2*row-1;i++){
        int star=i;
        if(row<i)star=2*row-i;
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        for(int j=0;j<=space;j++){
            cout<<" ";
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(row>i)space-=2;
        else space+=2; 
    }

    return 0;
}
