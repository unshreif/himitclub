#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int a,b,c;
    cin >> a>>b >> c;
 
    if (a > b && a>c ) cout << "Animal 1";
    else if (b > a && b > c) cout << "Animal 2";
    else if (c > a && c> b) cout << "Animal 3";
    else cout << "Tie";
}