#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans = abs(a-b);

        if(ans==0)
            cout<<0<<endl;
        else if(ans < 11){
            cout<<1<<endl;
        }
        else{

            if(ans%10!=0)
            {int q = ans/10;
            cout<<q+1<<endl;}
            else{
                cout<<ans/10<<endl;
            }
        }
    }
}