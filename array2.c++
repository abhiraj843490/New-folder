#include<iostream>
using namespace std;
void max(int a[5]);
int main(){
    int a1[5]={23,234,34,554,1};
    int a2[5]={56,4,43,8,98};
    max(a1);
    max(a2);
}
void max(int a[5]){
    int max=a[0];
    for(int i =0;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"maximum value is:"<<max<<endl;
}