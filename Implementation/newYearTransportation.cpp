#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    arr[0] = 0;
    for(int i=1; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=1; i<n; i++){
        sum=i+arr[i];
        i = sum-1;
        if(sum==d){
            cout<<"YES"<<endl;
            return 0;
        }
        else if(sum>d){
            cout<<"NO"<<endl;
            break;
        }
    }

}