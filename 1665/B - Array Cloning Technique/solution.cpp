#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>v;
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int>f;
        for(int i=0;i<n;i++){
            f[a[i]]++;
        }
        int maax=0;
        for(auto it:f){
            maax=max(it.second,maax);
        }
        if(n==1)cout<<0<<endl;
        else if(maax==n) cout<<0<<endl;
        else{
            int x=maax;
            while(x<=n){
                v.push_back(x);
                x=x*2;
            }
            x=x/2;
            if(x!=n){
                v.push_back(n);
            }
             int l=v.size();
        int op=0;
        for(int i=0;i+1<l;i++){
            op=op+1+v[i+1]-v[i];
        }
        cout<<op<<endl;
        }
    }
    return 0;
}