#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {

     ll l, b;
    cin >> l >> b;
 
    int counter = 0;
 
    while (l <= b) {
        l *= 3;
        b *= 2;
        counter++;
    }
 
    cout << counter << endl;


    return 0;
}
