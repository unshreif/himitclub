#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long sum = 1;
    long long temp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            temp *= j;
        }
        sum += temp;
        temp = 1;
    }
    if (sum > 1000000)
    {
        cout << "TOO LARGE" << endl;
    }
    else
    {
        cout << sum - 1 << endl;
    }
    return 0;
}