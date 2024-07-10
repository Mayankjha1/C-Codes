// Taking input from the user for table

#include<iostream>
using namespace std;
int main(){

    int table;
    cout<<"Please Enter the Table "<< endl;
    cin>>table;

    for (int i = 1; i <=10; i++)
    { 
        cout<<table*i<<endl;
    }
    

    return 0;
}