#include <bits/stdc++.h>
 
using namespace std;
int main() {
   int x;
   cin >> x;
 
   if (x % 5 == 0) {
      cout << "SWEET";
   }
   else if (x%2 != 0) {
      cout << "BITTER";
   }
   else {
      cout <<"NORMAL";
   }
}