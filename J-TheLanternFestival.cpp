#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    long long n;cin>>n;
    long long res=0;
   for (int i = 1; i <= n; i++)
   {
        if(i%2!=0){
            res+=i;
        }
   }
   cout<<res<<endl;
    return 0;
}
 