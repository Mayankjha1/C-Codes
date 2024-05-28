// We are using Ternary operator to check the person is eligible for voting or not 

#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"Please Enter your age : "<<endl;

    //Taking input
    cin>>age;

    (age>=18)?cout<<"You can Vote " : cout<<"You are not eligible for voting ";

    return 0;
}