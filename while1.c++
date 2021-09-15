#include<iostream>
using namespace std;
int main(){
    int total=0;
    int n;
    while (total<=100)
    {
       cout<<"enter value ";
       cin>>n;
       total=total + n;
    }
    cout<<"the total value is "<<total;
}