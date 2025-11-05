#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, k;
    cin >> n >> k;
    long long fac = 1;

    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    if (fac % k == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}