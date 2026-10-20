#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        int r=n%12;
        long long a;
        if(r<=9){
            a=r;
        }
        else if(r==10){
            a=22;
        }
        else a=11;
        if(a>n) cout<<-1<<endl;
        else cout<<a<<" "<<n-a<<endl;
 
    }
    return 0;
}