//with break in switch case gives the individual output
//but without break as like:
#include<iostream>
int main(){
    int num;
    std::cout<<"Enter value: ";
    std::cin>>num;
    switch (num)
    {
    case 1:
    std::cout<<"one" <<std::endl;
        //break;
    case 2:
    std::cout<<"two"<<std::endl;
    //break;
    case 3:
    std::cout<<"three"<<std::endl;
    //break;
    
    //default:
    //std::cout<<"no matched value";
        break;
    }
}