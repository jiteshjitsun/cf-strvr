#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int b = n,count=0;
        while(b>0){
            int rem = b%10;
            if(rem!=0){
                count+=1;
            }
            b/=10;
        }

        if(n<10) {
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else if(count==1){
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else {
            vector<int> res;
            int i = 0;
            while(n>0){
                int rem = n%10;
                int resul = rem*(pow(10,i)) + 0.5;
                if(rem!=0){
                    res.push_back(resul);
                }
                i+=1;
                n/=10;
            }
            cout<<res.size()<<endl;
            for(int i=0; i<res.size(); i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }
    }
}