#include<bits/stdc++.h>
using namespace std;

int main(){
    int  l,b;
    cin>>l>>b;
    int c=0;
    while(l<=b){
        l*=3;
        b*=2;
        c+=1;
    }
    cout<<c<<endl;
}