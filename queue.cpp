#include<iostream>
using namespace std;
class Queue{
    private: //dec;eration of data members
        int *arr;
        int front;
        int rear;
        int capacity;
    public: //initialization
        Queue(int size){
            capacity=size;//5
            arr=new int(capacity);
            front=0;
            rear= -1;
        }
        bool isempty(){
            return rear<front;
        }
        bool isfull(){
            return rear == capacity-1;
        }
        void Enqueue(int x){ //only rear will increment while entering value
            if(isfull()){
                cout<<"Queue is full cannot insert"<<endl;
                return;
            }
            arr[++rear]=x;
            cout<<x<<"inserted into the queue"<<endl;
        }
        void Dequeue(){
            if(isempty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<arr[front]<<"removed from queue."<<endl;
            front++;
        }
        void frontElement(){
            if(isempty()){
                cout<<"Queue is Empty"<<endl;
                return;
            }
            cout<<"Front value: "<<arr[front];
        }
        void Display(){
            if(isempty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<"Queue";
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        void deletequeue(){
            if(rear== -1){
                cout<<"Queue is empty"<<endl;
                return;
            }
            rear= -1;
            cout<<"Queue deleted";
        }
};
int main(){
    Queue obj(5);
    cout<<"Queue has created"<<endl;
    while(true){
        int choice;
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Dequeue"<<endl;
        cout<<"4.Peek"<<endl;
        cout<<"5.Delete Queue"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        if(choice==1)
        {
            int x;
            cout<<"Enter the value to add in queue:"<<endl;
            cin>>x;
            obj.Enqueue(x);
        }
        else if(choice==2){
            obj.Display();
        }
        else if(choice==3){
            obj.Dequeue();
        }
        else if(choice==4){
            obj.frontElement();
        }
        else if(choice==5){
            obj.deletequeue();
        }
        else{
            break;
        }
    
    }
}