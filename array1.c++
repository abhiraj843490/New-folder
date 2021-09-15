/*#include<iostream>
using namespace std;
int main(){
    int n,i,val,a[20];
    cout<<"enter size of array: ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>val;
    }
}*/

/*#include<iostream>
using namespace std;
void arr(int a[5]){
    int i;
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int a1[5]={12,334,54,54,65};
    int a2[5]={3,34,35,7,75};
    arr(a1);
    arr(a2);

}*/
#include<iostream>
using namespace std;
int main(){
    int a1[5]={12,334,54,54,65};
   cout<<a1[0];
   a1[0]=1;
   cout<<a1;
}