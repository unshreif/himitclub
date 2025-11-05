#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int a,b;
    cin >> a>>b;
    if (b == 0) {
        cout << "Division by zero!";
    }
    else if (a%b ==0) {
        cout<<"Perfect";
    }
    else {
        cout <<a%b;
    }
 
}
