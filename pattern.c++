//TRIANGLE

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"A ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//FULL RECTANGLE
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=0;i<=a;i++){
//         for(int j=0;j<=b;j++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
// }

// EMPTY RECTANGLE
#include <iostream>
using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=0;i<=a;i++){
//         for(int j=0;j<=b;j++){
//             if(i==0 || i==a || j==0 || j==b){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<"\n";
//     }
// }

//print s
// int main(){

//     for(int i=0; i<=4;i++){
//         for(int j=0;j<=4;j++){
//             if(i==1 & j>=1){
//                 cout<<"  ";
//             }
//            else if (i==3 & j<=3)
//            {
//                cout<<"  ";
//            }

//             else{
//                 cout<<"* ";
//             }
//         }
//         cout<<"\n";
//     }
// }
//printing A
int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (i == 0 & j == 2)
                cout << "* ";
            else if (i == 2 & j <= 3)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
