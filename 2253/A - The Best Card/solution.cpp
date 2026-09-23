#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=n+1;
        if(m%2==0)cout<<"NO"<<endl;
        else {
            int a=0;
            for(int i=2;i*i<=m;i++){
                if(m%i==0){
                    a=1;
                    break;
                }
            }
            if(a) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}