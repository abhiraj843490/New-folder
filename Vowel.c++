#include<iostream>
using namespace std;
int main(){
char c;
int num;
cout<<"Enter a character :"<<endl;
cin>>c;
cout<<"Enter a number :"<<endl;
cin>>num;
//cout<<num <<","<<::num;
if(c == 'A'||c=='a')
     cout<<"character is a vowel"<<endl;
else if (c=='E'||c=='e')
    cout<<"character is a vowel"<<endl;
else if (c=='I'||c=='i')
    cout<<"character is a vowel"<<endl;
else if (c=='O'||c=='o')
    cout<<"character is a vowel"<<endl;
else if (c=='U'||c=='u')
    cout<<"character is a vowel"<<endl;
else
    cout<<"character is consonent"<<endl;

if(num>0 && 100>num)
    cout<<"number is in between 0 to 100"<<endl;
else if(num>100 && 1000>num)
    cout<<"number is in between 100 to 1000"<<endl;
else
    cout<<"number is above then 1000"<<endl;
    int n1=343;
    int n2=45;
    int max=(n1>n2)?n1:n2;
    cout<<"maximum value is :"<<max;
}