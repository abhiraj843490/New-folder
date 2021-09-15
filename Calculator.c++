// #include<iostream>
// using namespace std;
// int main(){
//     int v;
//     int x = (3/2)+2;
//     int z = v + int(10.0);
//     int c=7;
//     cout<<(c<<2);
//     cin>>v;
//     cout<<"v is :" <<v;
//     cout<<"\nz is :" <<z<<endl;
//     cout<<"\n value of x is: " <<x;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int i,n;
//   i=0;
//   cin>>n;
//   //if(i<=n){
//     switch (n) {
//     case 1:
//     cout<<"one";
//     break;
//     case 2: cout<<"two"; break;
//     case 3: cout<<"three"; break;
//     case 4: cout<<"four"; break;
//     case 5: cout<<"five"; break;
//     case 6: cout<<"six"; break;
//     case 7: cout<<"seven"; break;
//     case 8: cout<<"eight"; break;
//     case 9: cout<<"nine"; break;
//     default: cout<<"number is greater than 9";
//     }
// }
/*
output
8
11
eight
nine
even
odd
*/
#include<iostream>
using namespace std;
int main(){
   int a,b,i;
   string c[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
   cin>>a>>b;
   for(i=a;i<=b;++i){
       if(i>9){
           i%2==0?cout<<"even\n":cout<<"odd\n";
       }
       else{
           cout<<c[i]<<endl;
       }
   }
}
