#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> height(n);
    for(int i=0; i<n; i++){
        cin>>height[i];
    }

    int maxi = *max_element(height.begin(),height.end());
    int mini = *min_element(height.begin(),height.end());
    int pos_max,pos_mini;
    for(int i=0; i<n; i++){
        if(maxi==height[i]){
            pos_max = i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(mini==height[i]){
            pos_mini = i;
        }
    }
    int res = (pos_max - 0) + abs(pos_mini - n +1);


    if(n==2 && pos_mini<pos_max){
        cout<<1<<endl;
    }
    else if(pos_max > pos_mini) 
        cout<<res-1;    
    else    
        cout<<res;
}