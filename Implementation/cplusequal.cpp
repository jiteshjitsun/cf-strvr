#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
    cin>>a>>b>>n;
    if(a>b)
    {
        swap(a,b);
    }
    int count = 0;
    while(a<=n)
    {
        a +=b;
        swap(a,b);
        count++;
    }
    count--;
    cout<<count<<endl;
    }
}