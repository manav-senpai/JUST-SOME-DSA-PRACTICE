 // decimal to binary number

 #include<iostream> 
 using namespace std;

 int main(){
    int num;
    string binary = "";

    cout<<"Enter the number to convert :"<<endl;
    cin>> num;
    
    for (num; num != 0; num / 2){
        if( num % 2 == 1){
            binary = binary + "1";
        }else{
            binary = binary + "0";
        }
    }

    cout<<binary;

    return 0;
 }