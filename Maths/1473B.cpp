#include<bits/stdc++.h>
using namespace std;

int gcd(long long n,long long m){
    if(n==0)
        return m;
    return gcd(m%n,n);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        long long int n=s.size(), m = t.size();
        long long int l= n*m/gcd(n,m);
        string x="",y="";
        for(long long int i=0; i<l/n; i++){
            x+=s;
        }
        for(long long int i=0; i<l/m; i++){
            y+=t;
        }
        if(x==y){
            cout<<x<<endl;
        }
        else    
            cout<<-1<<endl;
    }
}