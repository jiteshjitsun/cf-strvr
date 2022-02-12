#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int x;
    cin>>x;

    long long int t = x%14;
    long long int d = x/14;

    if(d>=1 && t>=1 && t<=6)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--){
        solve();
    }
}