#include <iostream>
#include <cmath>
 
using namespace std;
int main() {
   long long f;
   cin >> f;
   if (f==13) cout << "UNLUCKY";
   else if (f%7 == 0) cout << "MULTIPLE";
   else cout <<"SAFE";
}