#include <bits/stdc++.h>
 
using namespace std;
int main() {
    double n;
    cin >> n;
    int number = (int) n;
    double num2  = n - number ;
    if (num2 == 0 ) {
        cout <<"int " <<n ;
    }
    else {
        cout << fixed<< "float " << number << " "<< setprecision(3)<< num2;
    }
 
}