#include<iostream>
using namespace std;

class Graph
{
    private:
        bool **adjMatrix;
        int vertices;
        
    public:
        Graph(int vertices)        //constructor
        {
            this->vertices= vertices;   //stores total vertices
            adjMatrix=new bool *[vertices];       //create rows dynamically
            for (int i=0;i<vertices;i++)          //create columns dynamically
            {   
                adjMatrix[i]=new bool[vertices];
                
                for(int j=0;j<vertices;j++)    //initially no edges
                {
                    adjMatrix[i][j]=false;          //false=0
                }
            }
        }
    void addEdge(int source,int destination)      //function to add edge
    {
        //sice graph is undirected
        adjMatrix[source][destination]=true;
        adjMatrix[destination][source]=false;
    }
    void display()                          //display adjacency matrix
    {
       cout<<"\nAdjacency Matrix\n\n";
       for(int i=0;i<vertices;i++)
       {
           for(int j=0;j<vertices;j++)
           {
               cout<<adjMatrix[i][j]<<" ";
           }
           cout<<endl;
       }
    }
    //Destructor
    ~Graph()
    {
        for(int i=0;i<vertices;i++)
        {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
    }
};
int main()
{
   Graph g(6);           //create graph with 6 vertices
   g.addEdge(0,1);       //Main gate <-> Library
   g.addEdge(0,2);       //Main gate <-> Canteen
   g.addEdge(1,3);       //Library <-> Academic block
   g.addEdge(2,3);       //Canteen <-> Academic block
   g.addEdge(3,4);       //Academic block <-> Hostel
   g.addEdge(4,5);       //
   g.display();
   return 0;
}