#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int length;
    printf("enter the string");
    gets(str);
    length=strlen(str);
    printf("length=%d",length);
    return 0;
}