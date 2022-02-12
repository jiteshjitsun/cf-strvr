#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total_toast = (k*l)/nl;
    int limes_slices = c*d;
    int total_namak = p/np;

    cout<< min( min(total_namak,total_toast),limes_slices)/n<<endl;
}