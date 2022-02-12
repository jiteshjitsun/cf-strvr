#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    string str;
    cin>>str;
    unordered_map<char,int> mp;
    for(int i=0; i<str.length(); i++){
        mp[str[i]]++;
    }

    for(auto it:mp){
        if(it.second%k!=0){
            cout<<-1;
            return 0;
        }
    }
    string s="";
    for(auto it:mp){
        for(int i=0; i<it.second/k; i++){
            s+=it.first;
        }
    }
    string s1="";
    for(int i=0; i<k; i++){
        s1+=s;
    }
    cout<<s1<<endl;
}