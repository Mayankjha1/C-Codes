// Check the Number is +ve, -ve or 0

#include<iostream>
using namespace std;
int main(){

    int Number;
    cout<<"Please Enter a Number : ";
    cin>>Number;

    if(Number>0){
        cout<<"Positive number "<<endl;
    }
    else if(Number<0){
         cout<<"Negative number "<<endl;
    }

    else{
         cout<<"0 "<<endl;
    }
   
    return 0;
}