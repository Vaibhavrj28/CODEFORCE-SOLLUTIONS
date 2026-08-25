#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int x=n,y=1;
        for(int i=n-1;i>=0;i--){
            a[i]=x;
            a[i-1]=y;
            x--;
            y++;
            i--;
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}