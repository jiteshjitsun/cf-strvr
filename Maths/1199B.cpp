#include<bits/stdc++.h>
using namespace std;

int main(){
    double h,l;
    cin>>h>>l;
    double res;

    res = (l*l)/(2*h) - h/2;
    cout<<setprecision(30)<<res<<endl;
}