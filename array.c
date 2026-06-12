# include<stdio.h>
int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter a valur of array arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}