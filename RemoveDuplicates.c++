#include<iostream>
using namespace std;

void removedup(char* s){
    if(s[0]=='\0'){
        return;
    }

    if(s[0]==s[1]){
        int i=0;
        while(s[i]!='\0'){
            s[i]=s[i+1];
            i++;
        }
        removedup(s);
    }
    return removedup(s+1);
}

int main(){
    char s[1000];
    cin>>s;
    removedup(s);
    cout<<s<<endl;
    return 0;
}