//Find the Factorial of any Number 

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Please Enter a Number to find Factorial: "<<endl;
    cin>>n;
    int fact =1; 
    for (int i = n; i >=1 ; i--)
    {
      fact = fact*i;
    }
        cout<<fact<<endl;
    

    return 0;

}