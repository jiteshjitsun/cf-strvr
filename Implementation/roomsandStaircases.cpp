#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(s[0]=='1' || s[n-1]=='1'){
            cout<<2*n<<endl;
            // return 0;
        }
        else{
        int a = 0,left,right;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1'){
                a = 1;
                right = i;
                break;
            }
        }
            
        
        int i=-1;
        for(int j=n-1; j>=0; j--){
            i++;
            if(s[j]=='1'){
                a = 1;
                left= i;
                break;
            }
        }
        cout<<left<<" "<<right<<endl;
        int ans = 2*(n-min(left,right));
        if(a!=0){
            cout<<ans<<endl;
        }
        else{
            cout<<n<<endl;
        }
        }
    }
}