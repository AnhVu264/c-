c16: #include <iostream>

using namespace std;

int main()
{
    int x, y ,z;
    cin >> x >> y >> z;
    if ( x == y && y == z && x == z)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
