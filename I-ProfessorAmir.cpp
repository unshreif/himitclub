#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    long long n;
    cin>>n;
 
    long long num;
    cin>>num;
    long long res=num;
    for (int i = 1; i < n; i++)
    {
        cin>>num;
        if(i%2!=0){
            res=res+(-num);
        }else{
            res=res+num;
        }
    }
    cout<<res<<endl;
    return 0;
}
 