#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int cf = (k+n-1)/k;
        k*=cf;
        cout<<(k+n-1)/n<<endl;
    }
}