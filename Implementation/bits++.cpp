#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x=0;
    while(n--){
        
        string op;
        cin>>op;

        if(op[0]=='+'){
            x+=1;
        }
        else if(op[0]=='X' && op[2]=='+'){
            x+=1;
        }
        else{
            x-=1;
        }

    }
        cout<<x<<endl;
}