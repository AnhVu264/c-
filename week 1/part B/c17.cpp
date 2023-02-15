#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 400 == 0 || year % 4 == 0)
    {
        cout << year << " " << "is a leapyear.";
    }
    else if (year % 100 == 0)
    {
        cout << year << " " << "is not a leapyear.";
    }
    else
    {
        cout << year << " " << "is not a leapyear.";
    }
    return 0;
}
