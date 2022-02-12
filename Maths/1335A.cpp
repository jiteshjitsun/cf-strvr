#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n/2-1<<endl;
    }
    else
        cout<<n/2<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--)
        solve();
}