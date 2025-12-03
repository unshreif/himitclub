#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    long long n;
    cin>>n;
    long long sum=1;
    for (int i = 1; i <=n; i++)
    {
        sum*=i;
    }
    
    if(sum%2==0){
        cout<<"EVEN"<<endl;
    }else{
        cout<<"ODD"<<endl;
    }
    return 0;
}
 