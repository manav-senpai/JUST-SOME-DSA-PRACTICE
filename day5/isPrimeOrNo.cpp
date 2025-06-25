#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number to check :"<<endl;
    cin>>n;
    bool isPrime = true;

    for ( int i = 2; i <= (n-1); i++){
        if ( n%i == 0){
            cout<<"Is not prime ";
            isPrime = false;
            break;
        }
        
    }
    if( isPrime == true){
        cout<<"Is prime number ";
    }

    return 0;
}