#include<stdio.h>
#include<string.h>
int main(){
    char a[20]="Ashish";
    char b[20]={'A','s','h','i','s','h','\0'};
    char c[20];
    printf("Enter the string: ");
    scanf("%s",c);
    printf("Length of string a=%d\n",strlen(a));
    printf("Length of string b=%d\n",strlen(b));
    printf("Length of string c=%d\n",strlen(c));
    return 0;
}