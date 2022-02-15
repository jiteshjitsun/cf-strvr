#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,s;
    cin>>a>>b>>s;

   if(abs(a)+abs(b) <= s && (s-(abs(a)+abs(b)))%2==0 ) {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}