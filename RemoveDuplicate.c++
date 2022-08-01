#include<bits/stdc++.h>
using namespace std;
string removedup(string s){
    unordered_map<char,int>m;
    string str="";
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
        if(m[s[i]]==1)
            str=str+s[i];
    }
    return str;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<removedup(s)<<"\n";

    }
    return 0;
}