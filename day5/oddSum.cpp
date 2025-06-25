#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the nth term :";
    cin>>n;
    int oddSum = 0;
    
    cout<<"Odd numbers are :"<<endl;
    for ( int i = 1; i<=n; i++){
        if ( i % 2 != 0){
            cout<<i<<endl;
        }
        oddSum += i;

    }
    cout<<"The sum of above odd numbers is :"<< oddSum;
    return 0;
}