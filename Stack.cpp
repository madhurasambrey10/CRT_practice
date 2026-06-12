#include <iostream>
using namespace std;
class Stack
{
    private:
        int size;
        int top;
        int *arr;
    public:
        Stack(int s)  //constructor call automatically
        {
           size=5;
           arr=new int[size];
           top=-1;
        }
        
        bool isEmpty()   //it checks the stack is empty or not
        {
            return top== -1;
        }
        bool isFull()   //it checks the stack is full or not
        {
            return top ==size-1;
        }
        void push(int value)   //push operation
        {
            if(isFull())
            {
                cout<<"stack is full"<<endl;
                return ;
            }
            arr[++top]=value;
            cout<<"arr[top] Element has pushed"<<endl;
        }
        void display()   //display stack
        {
            if(isEmpty())
            {
                cout<<"stack is empty"<<endl;
                return ;
            }
            for(int i=top;i>=0;i--)
            {
                cout<<"["<<arr[i]<<"]"<<endl;
            }
        }
        void pop()
        {
            if(isEmpty())
            {
                cout<<"stack is empty"<<endl;
                return ;
            }
            cout<<arr[top--]<<endl;
        }
        void peek()
        {
            if(isEmpty())
            {
                cout<<"stack is empty"<<endl;
                return ;
            }
            cout<<"top element= "<<arr[top]<<endl;
        }  
        void deleteStack()
        {
            if(top== -1)
            {
                cout<<"stack is empty"<<endl;
                return ;
            }
            top= -1;
            cout<<"stack deleted"<<endl;
        }
};
int main()
{
    int choice;
    Stack st(5);  //st is the object and stack size=5
    cout<<"stack has created"<<endl;
    while(true)
    {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Peek"<<endl;
        cout<<"5. Delete"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        if(choice==1)
        {
            int val;
            cout<<"enter the element for stack: "<<endl;
            cin>>val;
            st.push(val);
        }
        else if(choice==2)
        {
            st.pop();
        }
        else if(choice==3)
        {
            st.display();
        }
        else if(choice==4)
        {
            st.peek();
        }
        else if (choice==5)
        {
            st.deleteStack();
        }
        else
        {
            break;
        }
    }
}