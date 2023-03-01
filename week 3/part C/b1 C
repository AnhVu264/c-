#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int number[n];
    bool lap = false;
    
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (number[i] == number[j])
            {
                lap = true;
            }
        }
    }

    if (lap == true)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
