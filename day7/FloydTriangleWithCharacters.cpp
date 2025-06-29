#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the value of n :";
    cin>>n;
    char ch = 'A';

    // floyd's triangle

    for( int i = 1; i <= n; i++){
      for(int j = i; j> 0; j-- ){
        cout<<ch<<" ";
        ch+= 1;

      }
      cout<<endl;
    }
    
    return 0;
}