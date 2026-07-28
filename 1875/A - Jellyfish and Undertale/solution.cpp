#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int i=0;
        int c=b;
        long long  ti=0;
        while(c!=0){
            if(i==n){
                while(c!=0){
                    c--;
                    ti++;
                }
            }
            else{
                while(c>1){
                    c--;
                    ti++;
                }
                if((c+arr[i])>a) c=a,c--,ti++;
                else{
                    c=c+arr[i];
                    c--;
                    ti++;
                }
                i++;
            }
        }
        cout<<ti<<endl;
    }
    return 0;
}