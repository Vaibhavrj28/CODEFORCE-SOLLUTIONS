#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long >a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int op=0;
        for(int i=n-2;i>=0;i--){
            while(a[i]>=a[i+1]){
                a[i]=a[i]/2;
                op++;
                if(a[i]==0) break;
            }
            if(a[i+1]==a[i]&&a[i]==0){
                op=-1;
                break;
            }
        }
        cout<<op<<endl;
}
 return 0;
}