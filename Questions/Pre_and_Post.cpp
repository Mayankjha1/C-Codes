// Check the output of the Program

#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int b = 5;
   // int sum = (++a)*(--b); // 44
    // int sum0 = (++a)*(++a); // 121
     int sum2 = (++a)*(a++); // 110
    // int sum3 = (a++)*(++a); // 110
    // int sum4 = (a++)*(a++); // 100
    cout<<sum2<<endl;
 
   
    return 0;
}