#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the nth term :";
    cin>>n;
    cout<<"Odd numbers are :"<<endl;
    for ( int i = 1; i<=n; i++){
        if ( i % 2 != 0){
            cout<<i<<endl;
        }
    }
    return 0;
}