#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j + i) % 7 == 0)
            {
                continue;
            }
            else if ((i * j) > ((n * n) / 2))
            {
                break;
            }
            else
            {
                res += (i * i) - (j * j);
            }
        }
    }
    cout << res << endl;

    return 0;
}
