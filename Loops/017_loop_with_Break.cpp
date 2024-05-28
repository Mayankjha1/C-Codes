// Use 1 to 10 but print upto 7 onlu using for loop

#include<iostream>
using namespace std;
int main(){

    for (int i = 1; i <=10; i++)
    {
       cout<<i<< " ";
       if (i==7)
       {
        break;
       }
       
        
    }
    

    return 0 ;
}
