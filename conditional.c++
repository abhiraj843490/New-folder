#include<iostream>
using namespace std;
int main(){
    int row , i,j;
    cout<<"enter a number of rows "<<endl;
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%c",64+i);
        }
        printf("\n");
    }
    return 0;
}