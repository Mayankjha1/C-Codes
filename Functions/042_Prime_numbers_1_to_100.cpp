// Write a function to print prime number in between 1 to 100

#include <iostream>
using namespace std;

// Declaring a Function

void Prime(){
    for (int i = 1; i <= 100; i++){
        if (i%2 == 0)
        {
            cout<<i<<endl;
        }
        
    }
}

int main(){

// Calling Function
    Prime();

    return 0;
}