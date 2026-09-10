#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        int i=0,z=i+k-1;
        while(z<n){
            int m=0;
            for(int j=i;j<=z;j++){
                if(s[j]=='0'){
                    m=1;
                    break;
                }
            }
            if(m==0) ans++;
            i=z+1;
            z=i+k-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}