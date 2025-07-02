#include<iostream>
using namespace std;

// $returnType $functionname($parametres){$function Content}

int sumN(int n){
    int sum = 0;
     
    for ( int i = 1; i <= n; i++){
        sum = sum+ i;
    }
    return sum;
    

}

int main(){
    cout<<"Enter the nth term :";
    int n;
    cin>>n;
    cout<<"Sum till nth term is :"<<sumN(n);

    return 0;
}