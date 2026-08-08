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
        int op=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                a[i]+=1;
                op++;
            }
        }
        for(int i=0;i+1<n;i++){
            if(a[i+1]%a[i]==0){
                a[i+1]+=1;
            }
        }
        for(auto it:a) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}