#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str = to_string(n);
        string s = "";
        int i=1,count=0;
        while(s!=str){
            if(s.length()<4){
                s += to_string(i);
                count+=s.length();
                // cout<<s<<endl;
            }
            else{
                i+=1;
                s="";
            }
        }

        cout<<count<<endl;
    }
}