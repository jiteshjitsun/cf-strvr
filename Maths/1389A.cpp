// #include<bits/stdc++.h>
// using namespace std;

// long long int gcd(long long int l,long long int r){
//      if(l==0)
//         return r;
//     return gcd(r%l,l);
//  }

// long long int lcm(long long int l,long long int r){
  
//   return (l/gcd(l,r))*r;

// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long int l,r;
//         cin>>l>>r;

//         int flag= 0;
//         for(long long int i=l; i<=r; i++){

//             for(long long int j=i+1; j<=r; j++){
                
//                 if(lcm(i,j) <=r && lcm(i,j)>=l){
              
//                     cout<<i<<" "<<j<<endl;
//                     flag=1;
//                     break;
                    
//                 }
//             }
//             if(flag==1) break;

//         }
//         if(flag==0)
//         cout<<-1<<" "<<-1<<endl;
//     }
// }



#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int x=0,y=0;
        if(l*2 <= r){
            x = l;
            y = l * 2;
        }
        else{
            x = -1;
            y = -1;
        }
        cout<<x<<" "<<y<<endl;
    }
}