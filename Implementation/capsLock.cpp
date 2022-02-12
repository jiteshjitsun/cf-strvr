#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int f=0;
    for(int i=0; i<str.length(); i++){
        if(str[i] >='A' && str[i] <= 'Z'){
            // cout<<i;
            continue;
        }
        else 
            f = 1;
    }
    if(f==0) {
        for(int i=0; i<str.length(); i++){
            str[i] = tolower(str[i]);
        }

        cout<<str<<endl;
        return 0;
    }

    if(str[0] >= 'a' && str[0] <='z')
    {
        for(int i=1; i<str.length(); i++){
            if(str[i] >= 'A' && str[i] <='Z'){
                continue;
            }
            else {
                cout<<str<<endl;
                return 0;
            }
        }

        str[0] = toupper(str[0]);
        for(int i=1; i<str.length(); i++){
            str[i] = tolower(str[i]);
        }

    }
    
    

    cout<<str<<endl;
}