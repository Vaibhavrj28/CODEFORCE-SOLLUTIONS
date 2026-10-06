#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        int s;
        if(a<b){
           s=b-a;
           a=a+c;
           int m=abs(a-b);
           if(s>m) cout<<s<<endl;
           else cout<<m<<endl;
        }
        else cout<<(a+c-b)<<endl;
    }
    return 0;
}