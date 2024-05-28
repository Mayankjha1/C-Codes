// Print Prime or Not taking the user input

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Please Enter a Number " << endl;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << "Prime " << endl;
    }
    else
    {
        cout << "Not Prime " << endl;
    }

    return 0;
}