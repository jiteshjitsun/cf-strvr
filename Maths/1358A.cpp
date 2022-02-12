#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int res = n*m;
        int div = res/2;
        int rem = res%2;

        cout<<div+rem<<endl;
    }
}