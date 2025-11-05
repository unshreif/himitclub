#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long counter = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else if (n % 2 != 0)
        {
            n -= 1;
        }
        counter++;
    }
    cout << counter << endl;
    return 0;
}