#include<bits/stdc++.h>
using namespace std;

bool check(int r,int g,int b,int w){
    if(r%2+g%2+b%2+w%2>1) return false;
    return true;
}


void solve(){
    int r,g,b,w;
    cin>>r>>g>>b>>w;

    if(check(r,g,b,w))
        cout<<"yes"<<endl;
    else if(r>0 && g>0 && b>0 && check(r-1,g-1,b-1,w+1)){  
            cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;
    cin>>_t;
    while (_t--)
    {
        solve();
    }
    
}