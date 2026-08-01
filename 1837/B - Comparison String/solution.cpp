#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=s.size();
        int m=1;
        int ma=1;
        for(int i=0;i+1<l;i++){
            if(s[i]==s[i+1]){
                m++;
            }
            else{
                ma=max(ma,m);
                m=1;
            }
        }
        ma=max(ma,m);
      cout<<ma+1<<endl;
}
return 0;
}