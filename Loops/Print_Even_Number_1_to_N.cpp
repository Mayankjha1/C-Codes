// Print all even number from t to N[user input]

#include<iostream>
using namespace std;
int main(){

    int user_input;
    cout<<"Enter the Number: "<<endl;
    cin>>user_input;

    for (int i = 1; i <=user_input; i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
        }
        
    }   

    return 0;
}