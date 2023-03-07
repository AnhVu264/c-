#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "m:";
    cin >> m;
    cout << "n:";
    cin >> n;
    int a[m][n];
    int hang = m, cot = n, k = 1, p = 0;

    while (k <= m*n)
    {
        for (int i = p; i < cot; i++)
            a[p][i] = k++;
        for (int i = p+1; i < hang; i++)
            a[i][cot-1] = k++;
        for (int i = cot-2; i >= p; i--)
            a[hang-1][i] = k++;
        for (int i = hang-2; i > p; i--)
            a[i][p] = k++;
        p++;
        hang--;
        cot--;
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}