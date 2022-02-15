#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int sum = 0,b=stoi(n),h=0,c=0;

        if(b==0) {
            cout<<"red"<<endl;
            continue;
        }
        // cout<<n<<endl;
        while(b>0){
            int rem = b%10;
            if(rem%2==0 && rem!=0) h=1;
            sum+= rem;
            b/=10;
        }

       

        for(int i=0; i<n.length(); i++){
            if(n[i]=='0'){
                c=1;
            }
        }

        if(sum%3==0 && c>=1 && h>=1){
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }
    }
}