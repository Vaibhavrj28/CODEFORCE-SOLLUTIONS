#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>a(3);
        for(int i=0;i<3;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int s=a[0]+a[1];
        if(s<a[2]) a[2]=s;
        int ans= a[2]-a[0];
        cout<<ans<<endl;
    }
    return 0;
}