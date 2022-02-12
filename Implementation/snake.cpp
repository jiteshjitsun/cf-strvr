#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> snake(n,vector<char>(m));

    for(int i=0; i<m; i++){
        snake[0][i] = '#';
        cout<<snake[0][i];
    }
    cout<<endl;
    int count = 0,flag=0;
    for(int i=1; i<n; i++){
        
        for(int j=0; j<m; j++){
            if(i%2==0){
                snake[i][j]='#';
               
            }
            else{
               
                if( count%2!=0 && j==0){
                    snake[i][j] = '#';
                }
                else if( count%2==0 && j==m-1){
                    snake[i][j]='#';
                }
                else {
                    snake[i][j] = '.';
                }
            }
            cout<<snake[i][j];
        }
        if(i%2==0){

        }
        else{
            count++;
        }
        cout<<endl;
    }
}