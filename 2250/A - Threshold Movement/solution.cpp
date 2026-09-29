#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>w(n);
        for(int i=0;i<n;i++) cin>>w[i];
        if(n%2==0){
            int a=w[n-1];
            int b=w[0];
            for(int i=1;i<n-1;i++){
                if(i%2==0){
                    if(w[i]<b)b=w[i];
                }
                else{
                    if(w[i]>a) a=w[i];
                }
            }
            if((b-a)<2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}