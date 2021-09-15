/*#include<iostream>
using namespace std;
int main(){
    int test[3][3];
    
    //test[0][0]=5;
   // test[0][1]=10;
    //test[1][1]=20;
    //test[2][2]=1;
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<test[i][j]<<" ";
        }
        cout<<"\n";
    }
}*/
// #include<iostream>
// using namespace std;
// void array1(int a[10]){
//     int n, i;
//     cout<<"enter array size: ";
//     cin>>n;
//     for(i=0; i<n; i++){
//         cout<<"a["<<i<<"] = ";
//         cin>>a[i];
//     }
// }
// int main(){
//     int a[10];
//         array1(a);
    
// }

#include<iostream>
using namespace std;
int main(){
    int a;
    char c;
    float f;
    long l;
    double d;
    cin>>a>>c>>f>>l>>d;
    printf("value which are entered\n");
    printf("%d\n",a);
    printf("%c\n",c);
    printf("%0.3f\n",f);
    printf("%0.9lf\n",l);
    printf("%ld\n",l);
}