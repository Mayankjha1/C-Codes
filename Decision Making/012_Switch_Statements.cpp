// Print all the Marks using Switch statement and take input from the user

#include <iostream>
using namespace std;
int main()
{

    char marks;
    cout << "Enter the Grade to check your marks : " << endl;

    // Taking input from user
    cin >> marks;

    switch (marks) {
    case 'A':
        cout << "Your Marks Is Between 90 to 100 : " << endl;
    break;
    case 'B':
        cout << "Your Marks Is Between 80 to 90 : " << endl;
    break;
    case 'C':
        cout << "Your Marks Is Between 70 to 80 : " << endl;
     break;
    case 'D':
        cout << "Your Marks Is Between 60 to 70 : " << endl;
    break;

    default:
        cout << "Your Marks Is Between 0 to 60 : " << endl;
    break;
    }

    return 0;
}