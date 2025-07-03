#include<iostream>
using namespace std;

int BiCoeff(int n, int r){
    int nfact = 1, rfact = 1, nmrfact = 1;
    
    for ( int i = n; i>= 1; i--){
        nfact = nfact * i; 
    }
    
    for ( int j = r; j>= 1; j--){
        rfact = rfact * j; 
    }
    int term = (n - r);
    for ( int k = term; k >= 1; k --){
        nmrfact = nmrfact * k;
    }

    float biCoeff = (nfact)/(rfact * nmrfact);

    return biCoeff;
}

int main(){
    int n1, r1;
    cout<<"Enter the values of n and r :"<<endl;
    cin>>n1;
    cin>>r1;

    cout<<BiCoeff(n1,r1)<<endl;
    
    return 0;


}