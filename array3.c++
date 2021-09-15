//  #include<iostream>
// using namespace std;
//int main(){
//     int sum;
//     sum=0;
//     int n, a[20];
//     cout<<"enter size of array: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"a["<<i<<"] ";
//         cin>>a[i];
//     }
//     cout<<"array is "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<"\t"<<a[i]<<"";
//         sum=sum+a[i];
//     }
//     int mean = sum/n;
//     cout<<"mean is "<<mean;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int i ,n,a[20],large,sec_large;
//     cin>>n;
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     large=a[0];
//     for(i=0;i<n;i++){
//         if(a[i]>large){
//             large=a[i];
//         }
//     }
//     sec_large=a[1];
//     for(i=0;i<n;i++){
//         if(a[i]!=large){
//             if(a[i]>sec_large){
//                 sec_large=a[i];
//             }
//         }
//     }
//     cout<<"\n The largest value is "<<large<<endl;
//     cout<<"the sec_largest value is "<<sec_large;
//}

#include<iostream>
using namespace std;
int main(){

    int a[20],n,i,val,pos;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter val ";
    cin>>val;
    cout<<"enter position ";
    cin>>pos;
    for(i=n-1;pos<=i;--i){
        a[i+1]=a[i];
    }
    a[pos]=val;
    n=n+1;
    for(i=0;i<n;i++){
        cout<<"\t a["<<i<<"]";
    }
}
