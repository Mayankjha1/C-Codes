// If Marks > 90 --> A
// If Marks > 80 --> B
// If Marks > 70 --> C
// If Marks > 60 --> D

#include <iostream>
using namespace std;
int main()
{

    int marks;
    cout << "Enter your marks : " << endl;
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "A " << endl;
    }
    else if (marks >= 80 && marks <= 90)
    {
        cout << "B " << endl;
    }
    else if (marks >= 70 && marks <= 80)
    {
        cout << "C " << endl;
    }
    else if (marks >= 60 && marks <= 70)
    {
        cout << "D " << endl;
    }
    else
    {
        cout << "Your marks is less than 60 " << endl;
    }

    return 0;
}