#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                ans++;
            }
        }
        if(ans){
            if(n%2==0){ // n is even;
                int s=a[0];
                int k=0; // total operations
                for(int i=1;i<n;i++){
                    s^=a[i];
                }
                for(int i=0;i<n;i++){
                    a[i]=s;
                }
                k++;
                while(s!=0){
                    s=a[0];
                    for(int i=1;i<n;i++){
                        s^=a[i];
                    }
                    for(int i=0;i<n;i++){
                        a[i]=s;
                    }
                    k++;
                }
                cout<<k<<endl;
                while(k--){
                    cout<<1<<" "<<n<<endl;
                }
            }
            else{
                int s=a[0];
                int k=0; // total operations
                for(int i=1;i<n-1;i++){
                    s^=a[i];
                }
                for(int i=0;i<n-1;i++){
                    a[i]=s;
                }
                k++;
                while(s!=0){
                    s=a[0];
                    for(int i=1;i<n-1;i++){
                        s^=a[i];
                    }
                    for(int i=0;i<n-1;i++){
                        a[i]=s;
                    }
                    k++;
                }
                int j=k;
                cout<<j+2<<endl;
                while(k--){
                    cout<<1<<" "<<n-1<<endl;
                }
                cout<<n-1<<" "<<n<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
        else cout<<0<<endl;
    }
    return 0;
}