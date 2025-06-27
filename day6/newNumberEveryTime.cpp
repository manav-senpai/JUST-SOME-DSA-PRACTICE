#include<iostream>
using namespace std;

int main(){
    cout<<"Enter ther value of n :";
    int n, num = 1;
    cin>>n;

    for (int i= 1; i<= n ; i++){
        for(int j = 1; j <= n; j++){
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    }

    
    return 0;
}