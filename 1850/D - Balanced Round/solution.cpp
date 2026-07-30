#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int c=1;
        int ans=0;
        vector<int> b;
        for(int i=0;i+1<n;i++){
            if(a[i+1]-a[i]<=k){
                c++;
            }
            else{
                b.push_back(c);
                c=1;
            }
        }
        b.push_back(c);
        int m=*max_element(b.begin(),b.end());;
        cout<<n-m<<endl;
    }
    return 0;
}