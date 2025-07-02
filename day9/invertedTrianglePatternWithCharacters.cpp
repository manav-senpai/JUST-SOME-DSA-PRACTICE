#include<iostream>
using namespace std;

int main(){
    string space = " ";
    cout<<"Enter the value of n :";
    int n;
    cin>>n;
    char ch = 'A';

    for ( int i = 1; i<= n; i++){
        
        for ( int j = 1; j<= i; j++){
            cout<<space<<" ";

        }
        for( int k = n+1; k > i; k--){
            cout<<ch<<" ";

        }
        ch+= 1;
        cout<<endl;
        
    }
    return 0;
        
}