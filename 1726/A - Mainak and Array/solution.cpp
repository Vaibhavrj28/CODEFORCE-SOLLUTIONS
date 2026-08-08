#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
         vector<pair<int,int>>p;
        p.push_back({a[0],a[n-1]});
        int mxx=a[n-1]-a[0];
        int x=n-1;
        while(x>0){
            p.push_back({a[x],a[x-1]});
            mxx=max(mxx,(a[x-1]-a[x]));
            x--;
        }
        int z=a[0];
        int mxx1=INT_MIN;
        for(int i=1;i<n;i++){
            mxx1=max(mxx1,(a[i]-a[0]));
        }
        int ans=max(mxx,mxx1);
        int mxx2=INT_MIN;
        z=a[n-1];
        for(int i=0;i<n-1;i++){
            mxx2=max(mxx2,(z-a[i]));
        }
        ans=max(ans,mxx2);
        cout<<ans<<endl;
        }
        return 0;
    }