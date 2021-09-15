//Write a C program to read an alphabet from the user and convert lowercase to uppercase (or) uppercase to lowercase using switch case.
#include<iostream>
using namespace std;
int main(){
    int num;
    char l,L;
    
    
    cout<<"enter your option:"<<endl;
    cin>>num;
    switch(num){
        case 1: cout<<"1.Lowercase to upercase"<<endl;
        cout<<"enter a lowercase character: ";
        cin>>l;
        break;
        case 2: cout<<"2.Uppercase to lowercase"<<endl;
        cout<<"enter a uppercase character: ";
        cin>>L;
        break;
    }
    
    
    if(islower(l)){
        cout<<"entered character is in lowercase"<<endl;
    }
    else
    cout<<"entered character is in Uppercase"<<endl;
    switch (num)
    {
    case 1: cout<<"in upr "<<toupper(l);
    break;
    case 2: cout<<"in lwr "<<tolower(L);
    break;
    default: cout<<"pls enter valid value";
        break;
    }

}