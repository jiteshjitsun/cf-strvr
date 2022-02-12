#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    for(int i=0; i<=n; i++){

        for(int j=0; j<2*(n-i); j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<k;
            if(k!=i)
                cout<<" ";

        }
        for(int l=i-1; l>=0; l--){
            cout<<" ";
            cout<<l;
        }
        cout<<endl;
    }

    for(int i=n-1; i>=0; i--){

        for(int j=0; j<2*(n-i); j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<k;
            if(k!=i)
                cout<<" ";
        }
        for(int l=i-1; l>=0; l--){
            cout<<" ";
            cout<<l;
        }
        cout<<endl;
    }
}