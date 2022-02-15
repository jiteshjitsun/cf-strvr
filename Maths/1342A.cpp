#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y,a,b;
        cin>>x>>y>>a>>b;
        b = min(b,a+a);
        if(x<y){
            swap(x,y);
        }

        cout<<y*b + (x-y)*a<<endl;
    }
}