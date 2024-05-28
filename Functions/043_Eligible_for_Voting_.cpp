// Write a function to print the person is eligible for voting or not ??

#include <iostream>
using namespace std;

// Declaring a Function

void Voting(int age)
{
    if (age >= 18){
        cout << "You can vote " << endl;
    }
    else{
        cout << "You are not eligible for Voting " << endl;
    }
}

int main()
{

    // Calling Function
    Voting(3);

    return 0;
}