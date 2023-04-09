/*
1.It is a linear data structure contain many nodes
2.Each node contain address of next node and some data
3.Head pointer points first tail pointer points last node

Advantages over array and vector
..................................

4.Not contigious like array
5.Can be changed in runtime
6.Linkedlist is optimal than array or vector
7.Ll is a dynamic ds (grow or shrink without memory wastage)
8.Insertion and deletion is easy (no shift needed)

Disadvantages
..............

9.


Types of linkedlist:

1.singly linkedlist
2.doubly linkedlist
3.circular linkedlist
4.circular doubly linkedlist


example:-

3|ar -> 4|ad -> 10|as -> 3|0 (sll)

df|34|dh ->




 */

#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{

    Node *newnode = new Node(d);
    newnode->next = head;
    head = newnode;
}

void insertAtPosition(Node *&head, int data)
{
    int pos;
    cout << "Enter position " << endl;
    cin >> pos;

    int cnt = 1;

    Node *temp = head;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
}

void insertAtEnd(Node *&head, int data)
{
    Node *endnode = new Node(data);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = endnode;
}

void print(Node *&head)
{
    Node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteHead(Node *&head)
{
    Node *temp;
    if (head->next == NULL)
    {
        cout << "Access Denied";
    }
    else
    {
        temp = head;
        head = head->next;
        delete (temp);
    }
}

void deletetail(Node *&head)
{
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{

    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node *head = node1;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtPosition(head, 0);
    insertAtEnd(head, 50);
    insertAtEnd(head, 60);
    insertAtEnd(head, 70);
    insertAtEnd(head, 80);
    print(head);
    deleteHead(head);
    deletetail(head);
    print(head);
    return 0;
}