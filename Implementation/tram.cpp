#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0; i<n; i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }

    int maxi = INT_MIN,sum=0;
    for(int i=0; i<n; i++){
        sum-=arr[i][0];
        sum+=arr[i][1];

        if(maxi < sum){
            maxi = sum;
        }
    }

    cout<<maxi<<endl;
}