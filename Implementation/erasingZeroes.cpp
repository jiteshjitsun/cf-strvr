#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int start_pos=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='1'){
                start_pos = i;   // 0010001001
                break;
            }
        }
        int end_pos=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='1'){
                end_pos = i;
            }
        }
        int count = 0;
        for(int i=start_pos+1; i<end_pos; i++){
           
            if(str[i]=='0'){
                count+=1;
                
            }
        }
        cout<<count<<endl;
        
    }
}