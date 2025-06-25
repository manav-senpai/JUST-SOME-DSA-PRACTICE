#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the nth term :";
    cin>>n;
    
    int i=1, sum = 0;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    

    cout<<"The sum of n numbers is :"<< sum;
    return 0;
}