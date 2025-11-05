#include <iostream>
using namespace std;
 
int main() {
        long long a, b;
        cin >> a >> b;
        a=(a*(a+1))/2;
        long long x=a%b;
        if (x==0)
        cout<<"The magic is perfect!";
        else
        cout<<"The spell failed! The remainder is "<<x;
        
}