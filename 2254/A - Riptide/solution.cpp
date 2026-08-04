#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b) cout<<0<<endl;
       else if(a==c) cout<<0<<endl;
        else if(c==b) cout<<0<<endl;
       else{
           int x=abs(c-b);
        int y=abs(c-a);
        int z=abs(b-a);
        cout<< min({x,y,z})<<endl;
       } 
    }
    return 0;
}