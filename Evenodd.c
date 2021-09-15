// #include<stdio.h>
// void oddeven(int num); // declare
// int main(){
//     int n;
//     printf("enter number ");
//     scanf("%d",&n);
//     oddeven(n);
// }
// void oddeven(int number){
//     if(number%2==0){
//         printf("even");
//     }
//     else{
//         printf("odd");
//     }
// }

// #include<stdio.h>
// void swap(int *a, int *b);
// int main(){
//     int n1, n2;
//     printf("enter num1 ");
//     scanf("%d",&n1);
//     printf("enter num2 ");
//     scanf("%d",&n2);
//     printf("before swapping %d %d\n",n1,n2);
//    swap(&n1,&n2);
//     printf("after swapping %d %d\n",n1,n2);
// }
// void swap(int *a, int *b){
//      int t;
//     t=*a;
//     *a=*b;
//     *b=t;
// }

#include<stdio.h>
int main(){
    int n;
    n=34;
    int *p;
    p=&n;
    printf("%d",*p);
}