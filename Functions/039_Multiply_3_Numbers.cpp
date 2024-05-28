// using Functions we are going to print multiplication of 4 Numbers

#include <iostream>
using namespace std;

// Declaring a Function:

int Total_sum(int a, int b, int c, int d)
{
    int sum = a * b * c * d;
    return sum;
}

// Declaring 2nd Function:
void Print_My_name()
{
    cout << "Mayank " << endl;
    return;
}

void Table(int Number)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << Number * i << endl;
    }
}

int main()
{
    cout << "===================================================================================================" << endl;
    // Using 1st Function:
    int ans = Total_sum(5, 6, 3, 8);
    cout << ans << endl;

    cout << "===================================================================================================" << endl;
    // Using 2nd Function:
    Print_My_name();

    cout << "===================================================================================================" << endl;
    // Using 3rd Function:
    int tab = 5;
    Table(tab);

    return 0;
}