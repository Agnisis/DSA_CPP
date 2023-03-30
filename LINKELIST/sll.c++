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

    
//constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};




int main()
{

    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    return 0;
}