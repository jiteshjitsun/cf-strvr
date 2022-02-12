#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    string s="";
    int i=0,b=0;
    while(b<n){
        b = ((i)*(i+1))/2;
        s.push_back(str[b]);
        i++;
    }
    s.pop_back();
    // cout<<s.length()<<endl;
    cout<<s<<endl;
}

