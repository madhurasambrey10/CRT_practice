#include<iostream>
using namespace std;
int main(){
    char name[10],ch;
    int i=0;
    cout<<"Enter the name: ";
    while(i<10){
        ch=getchar();
        name[i]=ch;
        i++;
    }
    name[i]='\0';
    cout<<"Name:"<<name;
    return 0;
}