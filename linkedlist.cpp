#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
void insertAtBeginning(Node *&head, int value){
    Node *newNode=new Node(value);
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(Node *&head, int value){
    Node *newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
int main(){
    Node *head=NULL;
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    insertAtEnd(head,60);
    insertAtBeginning(head,10);
    insertAtBeginning(head,20);
    insertAtBeginning(head,30);
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}