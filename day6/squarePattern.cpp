#include<iostream>
using namespace std;

int main(){
    cout<<"Enter ther value of n :";
    int n;
    cin>>n;

    for (int i= 1; i<= n ; i++){
        for(int j = 1; j <= n; j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }

    for (int i= 1; i<= n ; i++){
        for(int j = 1; j <= n; j++){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
    return 0;
}