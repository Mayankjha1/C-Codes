// Decision making statements
// Q. if you have budget of 2000000 then you can buy scorpioo else print not enough Money. Take input from user

#include <iostream>
using namespace std;
int main()
{

    int budget;
    cout << "Enter your budget " << endl;
    cin >> budget;

    if (budget > 2000000)
    {
        cout << "You can buy a new scorpioo " << endl;
    }
    else
    {
        cout << "You don't have any Money to buy scorpioo " << endl;
    }

    return 0;
}