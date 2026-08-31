#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int n,m;
     cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    long long  x=a[0]+n;
    long long  y=b[0]+m;
    if(x>=y) cout<<1<<endl;
    else if (x<y) cout<<2<<endl;
   }
    return 0;
}