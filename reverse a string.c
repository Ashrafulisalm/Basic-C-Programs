#include<stdio.h>

void main(){
    char a[100];
    printf("Enter a word or line:");
    gets(a);
    int n=strlen(a);
    int i;
    for(i=n-1;i>=0;i--){
        printf("%c",a[i]);
    }
}
