#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    long long n;cin>>n;
    long long res=0;
   for (int i = 5; i <= n; i+=5)
   {
        if(i%5==0){
            res+=i;
        }
   }
   cout<<res<<endl;
    return 0;
}