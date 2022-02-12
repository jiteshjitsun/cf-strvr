#include<iostream>
using namespace std;

void solve(){
    int x,y,z;
    cin>>x>>y>>z;

    long long int rem1 = x%z;
    long long int rem2 = y%z;
    long long int res =  (x/z + y/z);
    long long int res1 = x-(x-y)/z;
    if( res1 == res)
    cout<<(x+y)/z<<" "<<0<<endl;
    else
    cout<<(x+y)/z<<" "<<min(z-(x%z),z-(y%z))<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}