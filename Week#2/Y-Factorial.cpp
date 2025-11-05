#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long x;
    cin >> x;
    long long fac = 1;
    for (int i = 20; i >= 1; i--)
    {
        fac = 1;
        for (int j = 1; j <= i; j++)
        {
            fac *= j;
        }
        if (fac <= x)
        {
            x -= fac;
        }
    }

    if (x == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}