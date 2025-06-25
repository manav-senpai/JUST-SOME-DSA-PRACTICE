#include<iostream>
using namespace std;

int main(){
    int n, sum= 0;
    cout<<"Enter the nth term :";
    cin>>n;
    
    for (int i = 1; i<= n; i++){
        if ( i % 3 == 0){
            cout<<i<<endl;
            sum += i;
        }
    }
    cout<<"The sum of numbers till "<<n<<" Diviisble by 3 is :"<<sum;
}