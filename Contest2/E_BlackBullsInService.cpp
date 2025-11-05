#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a > c && a < b))
    {
        cout << "A" << endl;
    }
    else if ((b > a && b < c) || (b > c && b < a))
    {
        cout << "B" << endl;
    }
    else if ((c > b && c < a) || (c > a && c < b))
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "NONE" << endl;
    }

    return 0;
}