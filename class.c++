#include<iostream>
using namespace std;
// class Student{
//     public:
//     int id;
//     string name;
// };
// int main(){
//     Student s1;
//     s1.id=001;
//     s1.name="abhiraj";
//     cout<<s1.id<<endl;
//     cout<<s1.name<<endl;
// }


// class Employee{
//     public:
//     int id;
//     string name;
//     float salary;
// };
// int main(){
//     Employee e1;
//     Employee e2;
//     e1.id=1;
//     e1.name="abhiraj";
//     e1.salary=20000.0;
//     e2.id=2;
//     e2.name="sohit";
//     e2.salary=20200;
//     cout<<e1.id<<" "<<e1.name<<" "<<e1.salary<<endl;
//     cout<<e2.id<<" "<<e2.name<<" "<<e2.salary;
// }


#include<iostream>
using namespace std;
class Employee{
    public :
    int id;
    string name;
    float salary;
    void insert(int i, string n, float s){
        id=i;
        name =n;
        salary=s;
    }
    void display(){
        cout<<id<<" " <<name<<" "<<salary<<endl;
    }
};
int main(){
    Employee e1;
    Employee e2;
    e1.insert(1,"abhiraj",20000);
    e2.insert(2,"rahul",23000);
    e1.display();
    e2.display();
}