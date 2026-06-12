//binary search using stl
#include<algorithm>
#include<iostream>
using namespace std;
void show(int a[],int arraysize){
    for(int i=0;i<arraysize;i++){
        cout<<a[i]<<" ";
    }

}
int main(){
    int a[]={1,5,8,9,6,7,3,4,2,0};
    int arraysize=sizeof(a)/sizeof(a[0]);
    cout<<"\nOriginal array is: ";
    show(a,arraysize);
    sort(a,a+arraysize);
    cout<<"\n\nSorted array is: ";
    show(a,arraysize);
    if (binary_search(a,a+arraysize,2))
    cout<<"\n\nElement found in the array."<<endl;
    else
    cout<<"\n\nElement not found in the array."<<endl;
    return 0;
}