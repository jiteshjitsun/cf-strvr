#include<bits/stdc++.h>
using namespace std;

bool solve(int a,int b,int c){
    if((b-a)==(c-b))
        return true;
    else{
        int maxi = max(max(a,b),c);
        int a1,b1,c1;
        for(int i=1; i<100000000; i++){
            a1 = a*i;
            if(abs(a1-b)==abs(c-b) && a1!=c)
                return true;
            b1 = b*i;
            if(abs(a-b1)==abs(c-b1))
                return true;
            c1 = c*i;
            if(abs(a-b)==abs(b-c1))
                return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(solve(a,b,c))
            cout<<"yes"<<endl;
        else    
            cout<<"no"<<endl;
    }
}