#include<iostream>
using namespace std;
int main()
{
    int n,i;
    bool prime;
    for(i=1;i<=20;i++)
    {
        prime=true;
        if(i<=1)
        {
            prime=false;
        }    
        else
        {
            for(n=2;n<i;n++)
            {
                if(i%n==0)
                {
                    prime=false;
                    break;
                }
            }
        }
        if(prime)
        cout<<i<<" ";
    }
    return 0;
}