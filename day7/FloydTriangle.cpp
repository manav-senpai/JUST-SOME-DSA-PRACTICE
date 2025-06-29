#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the value of n :";
    cin>>n;
    int num = 1;
    
    for( int i = 1; i <= n; i++){
        for ( int j = 1; j<= i; j++){
            cout<<num<<" ";
            num += 1;

        }
        cout<<endl;
    }
    
    return 0;
}