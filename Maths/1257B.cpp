#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        if(x>3) puts("yes");
        else if(x==1) {
            if(y==1)
                puts("yes") ;
            else    
                puts("no");
        }
        else{
            if(y<=3)
                puts("yes");
            else
                puts("no");
        }
    }
}