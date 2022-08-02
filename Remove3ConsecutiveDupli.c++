#include<bits/stdc++.h>
using namespace std;
string remove3condup(string s){
    int i=0; string str="";
    int flag=0;
    while(i<s.length()){
        if(s[i]==s[i+1]&&s[i]==s[i+2]){
            i+=2;
            flag=1;
        }
        else{
            str=str+s[i];
        }
        i++;
    }
    if(str.length()==0){
        return "-1";
    }
    else if(flag==0){
        return str;
    }
    return remove3condup(str);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string res =remove3condup(s);
        cout<<res<<"\n";
    }
    return 0;
}