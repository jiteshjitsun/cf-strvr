#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    // n=n-1;
    if(n==1) {
        cout<<1<<endl;
    }
    else {
        int sum=0,i=1,count=0,l=1;
        while(sum <= n){
            sum+=i;
             l++;
            i = ((l)*(l+1))/2;
            count++;
           
          
        }
        count--;
        cout<<count<<endl;
    }
}