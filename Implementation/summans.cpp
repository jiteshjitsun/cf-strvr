#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<int> v;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='1')
            v.push_back(1);
        else if(str[i]=='2'){
            v.push_back(2);
        }
        else if(str[i]=='3'){
            v.push_back(3);
        }
    }
    sort(v.begin(),v.end());

    cout<<v[0];
    for(int i=1; i<v.size(); i++){
        cout<<"+"<<v[i];
        
    }
}