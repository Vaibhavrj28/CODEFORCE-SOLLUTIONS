#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<bool>f(26,false);
        for(int i=0;i<n;i++){
            string w;
            cin>>w;
            f[w[0]-'a']=true;
        }
        int a=1;
        for(int j=0;j<m;j++){
            string s;
            cin>>s;
            int l=s.length();
            for(int i=0;i<l;i++){
                if(f[s[i]-'A']==false){
                    a=0;
                    break;
                }
            }
        }
         if(a==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}