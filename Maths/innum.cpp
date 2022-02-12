#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	     int n;
	     cin>>n;
	     string s;
	     cin>>s;
	     int flag=0;
	     for(int i=0; i<n-1; i++){
             int a = atoi(s[i]);
             int b = atoi(s[n-i]);
             int c = atoi(s[i+1]);
             int d = atoi(s[n-i+1]);
	          if(a^b != c^d)
               {

                    // cout<< stoi(s[i])^stoi(s[n-i])<<endl;
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
               }
	     }
         if(flag==0)
	     cout<<"YES"<<endl;
	}
	return 0;
}
