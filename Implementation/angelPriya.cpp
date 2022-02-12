#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    unordered_set<char> mp;
    for(int i=0; i<str.length(); i++){
        mp.insert(str[i]);
    }

    if(mp.size()%2==0) 
        cout<<"CHAT WITH HER!"<<endl;
    else    
        cout<<"IGNORE HIM!"<<endl;
}