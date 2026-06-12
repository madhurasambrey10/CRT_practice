#include<stdio.h>
#include<string.h>
void mystrlen(char*);
int main(){
    char str1[120];
    printf("\n Enter any string:");
    scanf("%s",str1);
    mystrlen(str1);
    return 0;
}
void mystrlen(char*s1){
    int length=0;
    while(*s1!='\0'){
        length++;
        s1++;
    }
    printf("Length is %d",length);
}