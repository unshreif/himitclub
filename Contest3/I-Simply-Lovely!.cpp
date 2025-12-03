#include <bits/stdc++.h>
using namespace std;
int main(){
    long long N,M;
    while (cin>>N>>M){
        long double session=0;

        for(long long lap=1; lap<=N; ++lap){
            long long L=0; bool voidlap=false;

            for(long long j=0;j<M;++j){
                long long v; cin>>v;
                if(v==-1) voidlap=true;
                if(voidlap) continue;
                if(v==0) continue;
                if(v>10) L += v*v;
                else L += (v%2? v-1 : v);
            }
        
            if(!voidlap) session += L*lap;
        }
        cout<<"Total Session Score: "<< llround(session/4.2L) <<"\n";
    }
}