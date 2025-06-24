#include<iostream>
using namespace std;    

int main(){
  int n;
  cout<<"Enter the number you want to check: ";
  cin>>n;

  if ( n % 2 == 0){
    cout<< "The number "<< n <<" is an even number"<<endl;

  }
  else{
    cout<<"The number "<< n <<" is an odd number"<<endl;
  }
  return 0;
}