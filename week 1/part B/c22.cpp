#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double weight, height;
    cin >> weight >> height;
    double BMI = weight / (height * height);
    cout << BMI;

    return 0;
}
