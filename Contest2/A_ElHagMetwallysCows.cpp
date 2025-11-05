#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ll t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
        
        if (n % 2 == 0)
            cout << 0 << "\n";   
        else
            cout << x << "\n";   
    }


    return 0;
}
