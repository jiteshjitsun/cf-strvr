#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[3],n;
        cin>>arr[0]>>arr[1]>>arr[2]>>n;
        sort(arr,arr+3);
        
        n = n- 2*arr[2]-arr[1]-arr[0];

        // cout<<n<<endl;
        // n = n- (2*arr[2]-arr[1]-arr[0]);
        cout<<n<<endl;
        if(n<0 || n%3!=0){
            cout<<"NO"<<endl;
        }
        else 
            cout<<"YES"<<endl;

        // int a[3], n;
		// cin >> a[0] >> a[1] >> a[2] >> n;
		// sort(a, a + 3);
		// n -= 2 * a[2] - a[1] - a[0];
		// if (n < 0 || n % 3 != 0) {
		// 	cout << "NO" << endl;
		// } else {
		// 	cout << "YES" << endl;
		// }
    }   
}