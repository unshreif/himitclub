#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;

    int servers[100]; 
 
    for (int i = 0; i < n; i++) {
        cin >> servers[i];
    }
 
    int minLoad = servers[0]; 
    int minIndex = 0;     
 
    for (int i = 1; i < n; i++) {
      
        if (servers[i] < minLoad) {
            minLoad = servers[i];
            minIndex = i;       
        }
    }
 
    cout << "Assign to Server " << minIndex << " with load " << minLoad << "%." << endl;
 
    return 0;
}