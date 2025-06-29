#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n :";
    int n;
    char ch = 'A';
    cin>>n;

    for (int i = 1; i <= n; i++){
        
        for ( int j = 1; j<= i ; j++){
            
            cout<<ch<<" "; 
        }
        ch += 1;
        cout<<endl;
    }
    return 0;
}