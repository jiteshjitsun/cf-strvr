#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string p,h;
        cin>>p>>h;
        
        sort(p.begin(),p.end());
        sort(h.begin(),h.end());
        int c = 0,maxi=0;
        for(int i=0; i<h.length(); i++){
            for(int j=0; j<p.length(); j++){
                if(h[i]==p[i]){
                    c+=1;
                }
            }
            maxi = max(c,maxi);
            c = 0;
        }
        // cout<<maxi;
        if(maxi==p.length())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
}