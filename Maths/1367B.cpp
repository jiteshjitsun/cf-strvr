#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int arr[n];
        int count = 0,flag=0;
        vector<int> e;
        vector<int> o;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i%2==0 && arr[i]%2!=0){
                e.push_back(i);
            }
            else if(i%2!=0 && arr[i]%2==0){
                o.push_back(i);
            }
        }

        if(e.size()==o.size()){
            cout<<e.size()<<endl;
        }
        else 
            cout<<-1<<endl;
        
    }
    
}