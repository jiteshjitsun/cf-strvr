#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        mp[num]++;
    }
    int co=0,ans=0;
    for(auto it:mp){
        co+=it.second%2;
        ans+=it.second/2 * 2;
    }
    ans+=(co+1)/2;
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}