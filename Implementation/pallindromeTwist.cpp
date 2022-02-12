#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int sum = 0,flag = 1;
        for(int i=0; i<n-1; i++)
        {
            int k = abs(str[i]-str[n-i-1]);
            if(k > 2 || k%2==1){
                flag = 0;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
}