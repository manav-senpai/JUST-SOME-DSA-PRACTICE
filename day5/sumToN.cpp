#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the nth term :";
    cin>>n;
    int sum = 0;
    for ( int i = 1; i <=n; i++){
        sum += i;
    }
    cout<<"The sum of n numbers is :"<< sum;
    return 0;
}