// I have to print on which day I have planed which workout and take input from user

#include <iostream>
using namespace std;
int main()
{

    int Days;
    cout << "Please Enter Week Name to fetch your workout day : " << endl;

    // Taking input
    cin >> Days;

    switch (Days)
    {
    case 1:
        cout << "Monday -->  Chest Day " << endl;
        break;
    case 2:
        cout << "Tuesday -->  Back Day " << endl;
        break;
    case 3:
        cout << "Wednesday -->  Abs + Chest Day " << endl;
        break;
    case 4:
        cout << "Thursday -->  Leg Days " << endl;
        break;
    case 5:
        cout << "Friday -->  Shoulder Day " << endl;
        break;
    case 6:
        cout << "Saturday -->  Biceps and Triceps Day " << endl;
        break;

    default:
        cout << "Rest Day " << endl;
        break;
    }

    return 0;
}