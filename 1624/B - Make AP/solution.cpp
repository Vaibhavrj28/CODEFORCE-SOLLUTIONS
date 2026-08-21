#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=0;
        float j=(a+c)/2;
        if(j>0){
            if((a+c)%2==0){
                int jj=(a+c)/2;
                if(jj%b==0) x=1;
            }
        }
        if(x==0){
            int y=2*b-c;
            if(y>0){
                if(y%a==0) x=1;
            }
        }
        if(x==0){
            int y=2*b-a;
            if(y>0){
                if(y%c==0) x=1;
            }
        }
        if(x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}