#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int m=*max_element(v.begin(),v.end())+1;
        int j=*min_element(v.begin(),v.end());
        cout<<m-j<<endl;
    }
    return 0;
}