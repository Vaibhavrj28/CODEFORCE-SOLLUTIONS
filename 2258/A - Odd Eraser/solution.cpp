#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int m=gcd(a[0],a[n-1]);
        cout<<m<<endl;
    }
    return 0;
}