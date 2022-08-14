#include<bits/stdc++.h>
using namespace std;
int miniIndex(vector<int>&v,int n){
    int m=0;
    for(int i=0;i<n;i++){
        for(int j<n-1;j>i;j--){
            if(a[j]>=a[i]){
                m=max(m,j-i);
                break;
            }
        }
    }
    return m;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res = miniIndex(v,n);
    cout<<res;
    return 0;
}