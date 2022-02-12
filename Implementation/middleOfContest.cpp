#include<bits/stdc++.h>
using namespace std;

int main(){
    int h1,m1,h2,m2;
    char c;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    int t1 = h1*60+m1;
    int t2 = h2*60+m2;
    int t3 = (t1+t2)/2;
    if(t3/60 < 10 && t3%60 == 0)
        cout<<"0"<<t3/60<<":"<<t3%60<<"0"<<endl;
    else if 
        cout<<t3/60<<":"<<t3%60<<endl;
}