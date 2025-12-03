#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int b;
    cin >> b;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int pixel;
            cin >> pixel;
            cout << pixel + b;
            
            if (j < m - 1) cout << " ";
        }
        cout << endl; 
    }

    return 0;
}