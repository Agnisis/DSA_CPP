#include<iostream>
using namespace std;

class Node{
      
      public:
      int data;
      Node* next;
      Node* prev;

      Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;

      }
};

void insertAthead(Node* &head,Node* &tail,int data){
   Node* newnode= new Node(data);
   newnode->next=head;
   head->prev=newnode;  
   tail=head;
   head=newnode;
}

void insertAtTail(Node* &tail,int data){
Node* newnode=new Node(data);
newnode->prev=tail;
tail->next=newnode;
tail=newnode;
}

void print(Node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){

Node* head= new Node(50);
Node* tail=head;
print(head);

    insertAthead(head,tail,40);
    insertAthead(head,tail,30);

    insertAtTail(tail,60);
    print(head);
    return 0;
}