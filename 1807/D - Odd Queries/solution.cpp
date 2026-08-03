#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        long long c=sum;
        vector<long long >p(n,0);
        p[0]=a[0];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+a[i];
        }
        while(q--){
            long long l,r,k;
            sum=c;
            cin>>l>>r>>k;
            l--;// 0 based indexing;
            r--;// 0 based indexing;
            if(l==0){
                sum=sum-p[r]+k*(r-l+1);
            }
            else{
                 long long  m=p[r]-p[l-1];
             sum=sum-m+k*(r-l+1);
            }
            if(sum%2==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}