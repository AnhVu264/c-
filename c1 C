#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, check = 1;
    cin >> n;
    if (n <= 1)
    {
        cout << "no";
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                check = 0;
            }
        }
    }
    if (check == 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
