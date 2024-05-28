//Write a function to Calculate Simple Intrests

#include<iostream>
using namespace std;

// Declaring a Function:

int Simple_intrests(int P, int R, int T){
    int SI = (P * R * T)/100;
    return SI;
}

int main(){

        int Total = Simple_intrests(200,30,40);
        cout<<"Total " << Total;



    return 0;
}