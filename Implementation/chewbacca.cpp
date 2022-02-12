#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x;
    cin>>x;
    long long int n = x;
    vector<long long> v;
    while(n>0){
        long long int r = n%10;
        v.push_back(r);
        n/=10;
    }
    reverse(v.begin(),v.end());
    for(long long int i=0; i<v.size(); i++){
        if(i==0 && v[0]==9)
            continue;
        if(v[i] > 4){
            v[i] = 9 - v[i];
        }
    } 
    for(long long int i=0; i<v.size(); i++){
        if(v[i]==0){
            v.pop_back();
        }
        else
            break;
    }
    for(long long int i=0; i<v.size(); i++){
        cout<<v[i];
    }
}