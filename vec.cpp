#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> g1;
    for(int i=1;i<=5;i++)
    {
        g1.push_back(i);
    }
        cout<<"Output of begin and end: ";
        for(auto i=g1.begin(); i!=g1.end();++i)
        {
            cout<<*i<<" ";
        }
        cout<<"\n Output of rbegin and rend: ";
        for(auto ir=g1.rbegin(); ir!=g1.rend();++ir)
        {
            cout<<*ir<<" ";
        }

        cout<<"\n size: "<<g1.size();
        cout<<"\n Capacity:"<<g1.capacity();
        cout<<"\nMax size: "<<g1.max_size();

        cout<<"\nat \t: g1.at(4)="<<g1.at(3);
        cout<<"\nfront() \t: g1.front()="<<g1.front();
        cout<<"\nback() \t: g1.back()="<<g1.back();
        return 0;
    
}