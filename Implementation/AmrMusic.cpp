#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end());
    int count = 0;
    
    vector<int> res;
    for(int i=0; i<n; i++){
        if(k<v[i].first){
            break;
        }
        res.push_back(v[i].second+1);
        k-=v[i].first;
    }

    sort(res.begin(),res.end());
    cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}