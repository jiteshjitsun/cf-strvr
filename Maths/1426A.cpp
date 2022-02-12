#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int ans = 1;
        int div = (n-2)/x;
        int rem = (n-2)%x;
        if(n<=2)
            ans = 1;
        else if(rem==0)
            ans += div;
        else 
        {
            ans += div+1;
        }
        cout<<ans<<endl;
    }
    
}