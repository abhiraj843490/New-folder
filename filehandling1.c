// #include<stdio.h>
// int main(){
//     FILE *f;
//     f=fopen("abhi.txt","w");
//     if(f==NULL){
//         printf("file is failed");
//     }
//     else{
//         printf("file is opened successfully");
//     }
//     fclose(f);
//     return 0;
// }

//We can read content of a file in c using the fscanf() and fgets() and fgetc() functions. All are used to read contents of a file. Let’s see the working of each of the function
//The fscanf() function is used to read character set i.e strings from the file. It returns the EOF
//int fscanf(FILE *stream, const char *charPointer[])

// #include<stdio.h>
// int main(){
//     FILE *f;
//     char str[100];
//     f=fopen("abhi.txt","r");
//     if(f==NULL){
//         printf("failed to opened");
//     }
//     else{
//         while(fscanf(f, "%s",str)!=EOF){
//             printf("%s",str);
//         }
//     }
//     fclose(f);
//     return 0;
// }

//char* fgets(char *string, int length, FILE *stream)

// #include<stdio.h>
// int main(){
//     FILE *f;
//     char str[100];
//     f=fopen("abhi.txt","r");
//     if(f==NULL){
//         printf("failed");
//     }
//     else{
//    printf("%s", fgets(str, 50,f));}
//    fclose(f);
//    return 0;
// }

//fgetc()

#include<stdio.h>
int main(){
    FILE *f;
    char str;
//     f=fopen("abhi.txt","r");
//     if(f==NULL){
//         printf("failed");
//     }
//     else{
//         while ((str=fgetc(f))!=EOF)
//         {
//             printf("%c",str);
//         }
        
//     }
//     fclose(f);
//     return 0;
// }


// f=fopen("abhi.txt", "w");
// if(f==NULL){
//     printf("failed");
// }
// else{
//     if(fprinf(f, "tutorial point help me allot")>=0)
//     printf("written operation successfully");
// }
// fclose(f);
// return 0;
// }


// f=fopen("abhi.txt", "w");
// if(f==NULL){
//     printf("failed");
// }
// else{
//     if(fputs("tutorial point help me allot",f)>=0)
//     printf("written operation successfully");
// }
// fclose(f);
// return 0;
// }

f=fopen("abhi.txt","w");
if(f==NULL){
    printf("failed");
}
else{
    fputc('T',f);
}
fclose(f);
return 0;
}