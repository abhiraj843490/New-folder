#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    int salary;

    public:
    Employee(int i,string n, int s){

        //this->id=id;
        
        id=i;
        name=n;
        salary=s;
    }
    void dis(){
        cout<<id<<" "<<name<<" "<<salary<<endl; 
    }
};
int main(){
    Employee e1=Employee(1,"abhi",20000);
    Employee e2=Employee(2,"Rahul",23000);
    e1.dis();
    e2.dis();
}