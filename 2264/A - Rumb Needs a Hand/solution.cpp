#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int j,vector<int>& p ,vector<int>& a){
    if(i>j) return;   // matlab array reverse hogya or return hogya .
    swap(p[a[i]],p[a[j]]);
    reverse(i+1,j-1,p,a);
}
int main(){
    int t ;
    cin>>t ;
    while(t--){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    vector<int>a;
    for(int i=0;i<n;i++){
        if(p[i]!=i+1) a.push_back(i);
    }
    int s=a.size();
      reverse(0,s-1,p,a);
      int ans=0;
      for(int i=0;i+1<n;i++){
        if(p[i]>p[i+1]){
            ans++;
            break;
        }
      }
      if(ans) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
}
return 0;
}