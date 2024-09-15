#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node *n = new node(val);
    if(head ==NULL){
        n->next = n;
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next=n;
    n->next = head;
    head=n;
};



