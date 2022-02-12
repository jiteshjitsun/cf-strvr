#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int mini = min(m,n);
        mini+=mini;
        // cout<<mini<<endl;
        int res = max(mini,max(m,n));

        cout<<res*res<<endl;
    }
}