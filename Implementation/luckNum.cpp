#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int flag = 0;
    while(n>0){
        int rem = n%10;
        if(rem!=7 && rem!=4){
            cout<<"NO"<<endl;
            flag = 1;
            break;
        }
        n/=10;
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }
}