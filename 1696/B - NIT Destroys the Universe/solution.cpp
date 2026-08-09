// see in this question we have to choose smallest number which is not in set.
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int>b;
        for(int i=0;i<n;i++){
            if(a[i]!=0) b.push_back(i);
        }
        int s=b.size();
        int op=0;
        if(s>=1) op++;
        for(int i=0;i+1<s;i++){
            if((b[i+1]-b[i])>1)op++;
        }
        if(op==0) cout<<0<<endl;
        else if(op==1) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}