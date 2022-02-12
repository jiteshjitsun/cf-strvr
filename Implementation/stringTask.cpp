#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string s="";
    for(int i=0; i<str.length(); i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'
            && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='y' && str[i]!='Y'){
                s+='.';
                s+= tolower(str[i]);
        }
    }
    cout<<s<<endl;
}