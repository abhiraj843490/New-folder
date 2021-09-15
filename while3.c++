//find the sum of even numbers between any two numbers.
#include<iostream>
using namespace std;
int main(){
    int l,u,t=0;
    cout<<"enter lwr limit ";
    cin>>l;
    cout<<"enter upr limit ";
    cin>>u;
    while(l<=u){
       // cout<<l<<endl;
        if(l%2==0){
            cout<<"even number "<<l<<endl;
            t=t+l;
        }
        l++;       
    }
    cout<<"total is "<<t;
}