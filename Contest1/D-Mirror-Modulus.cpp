#include <iostream>
using namespace std;
 
int main() {
    long long a, b;
    cin >> a >> b;
 
    if (a!= 0 && b!= 0) {
        long long d1 = a % b;
        long long d2 = b % a;
 
        if (d1 == d2)
            cout<<"MIRROR";
        else if (d1 > d2)
            cout << "LEFT";
        else
            cout << "RIGHT";
    } 
    else {
        cout << "MIRROR";
    }
 
    return 0;
}