#include <bits/stdc++.h>
 
using namespace std;
int main() {
   int a,b,c;
   cin >> a >> b >>c;
   if (a == b && b==c ) {
      cout <<"ALL";
   }
   else if (a==b || b==c || a == c) {
      cout << "TWO";
   }
   else {
      cout << "NONE";
   }
}