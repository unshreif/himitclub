#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;         
    int limit;      
    int acCount = 0;  
    int tleCount = 0; 

    cin >> n >> limit;
 
    for (int i = 0; i < n; i++) {
        int runtime;
        cin >> runtime; 

        if (runtime <= limit) {
            acCount++; 
        } else {
            tleCount++; 
        }
    }

    cout << "Accepted: " << acCount << endl;
    cout << "TLE: " << tleCount << endl;
 
    return 0;
}