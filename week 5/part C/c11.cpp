1. Chuyển hệ thập phân sang hệ nhị phân:
#include <iostream>
#include <cmath>

using namespace std;

long long decToBin (int sothapphan)
{
    long long sonhiphan = 0;
    int p = 0;
    while (sothapphan > 0)
    {
        sonhiphan += (sothapphan % 2) * pow(10, p);
        p++;
        sothapphan /= 2;
    }
    return sonhiphan;
}

int main()
{
    int sothapphan;
    cout << "Nhap so thap phan: ";
    cin >> sothapphan;
    cout << decToBin(sothapphan);
    return 0;
}

2. Chuyển hệ nhị phân sang hệ thập phân:
#include <iostream>
#include <cmath>

using namespace std;

int binToDec (long long sonhiphan)
{
    int sothapphan = 0;
    int p = 0;
    while (sonhiphan > 0)
    {
        sothapphan += (sonhiphan % 10) * pow(2, p);
        p++;
        sonhiphan /= 10;
    }
    return sothapphan;
}

int main()
{
    long long sonhiphan;
    cout << "So nhi phan la: ";
    cin >> sonhiphan;
    cout << binToDec(sonhiphan);
    return 0;
}

