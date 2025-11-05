#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    int n,k;
    cin>>n>>k;
    long long res=0;
    for (int i = 1; i <= n; i++)
    {
        if(i%k==0){
            res+=i;
        }
    }
    cout<<res<<endl;
    return 0;
}