#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[7];
    for(int i=0; i<7; i++){
        cin>>arr[i];
    }
    int i=0,sum=0;


    while(sum<n) {
        sum+=arr[i];
        // cout<<sum<<"-"<<i<<endl;
        i++;
        if(i==7 && sum<n){
            i=0;
        }
    }
    cout<<i<<endl;
}