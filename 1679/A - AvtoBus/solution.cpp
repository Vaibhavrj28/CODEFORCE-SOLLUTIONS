#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<4) cout<<-1<<endl;
        else if(n%2!=0) cout<<-1<<endl;
        else{
            if(n%4==0&&n%6==0) cout<<n/6<<" "<<n/4<<endl;
            else{
                if(n%4==0){
                    long long aa=n/4;
                    long long op=0;
                    while(n%6!=0){
                        n=n-4;
                        op++;
                    }
                    op=op+(n/6);
                    cout<<op<<" "<<aa<<endl;
                }
                else if(n%6==0){
                    long long op=0;
                    long long aa=n/6;
                    while(n%4!=0){
                        n=n-6;
                        op++;
                    }
                    op=op+(n/4);
                    cout<<aa<<" "<<op<<endl;
                }
                else{
                    long long mi=0;
                    long long ma=0;
                    long long j=n;
                    while(n%6!=0){
                        n=n-4;
                        mi++;
                    }
                    mi=mi+(n/6);
                    while(j%4!=0){
                        j=j-6;
                        ma++;
                    }
                    ma=ma+(j/4);
                    cout<<mi<<" "<<ma<<endl;
                }
            }
        }
    }
    return  0;
}