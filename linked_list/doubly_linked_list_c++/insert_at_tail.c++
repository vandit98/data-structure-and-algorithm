#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Double_ll_node{
    public:
    int data;
    Double_ll_node* prev;
    Double_ll_node* next;

    // constructor
    Double_ll_node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    // printing our node
   
};
// traversing a douby linked list
 void print(Double_ll_node* &head){
        Double_ll_node* temp=head;
        while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
        }
        cout<<endl;
    }
// function to get the ;length of the doubly linked_list
    int length_ll(Double_ll_node* &head){
        int len=0;
        Double_ll_node* temp=head;

        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        return len;
    }
// function to insert at head
void insert_at_head(Double_ll_node* &head,int d){
    // this is our new node 
    Double_ll_node* temp=new Double_ll_node(d);
    // head is the head of our existing linked_list
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insert_at_tail(Double_ll_node* &tail,int d){
    // creating a node to add at tail
    Double_ll_node* temp=new Double_ll_node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
int main()
{

Double_ll_node* node1=new Double_ll_node(12);
// making head
Double_ll_node* head=node1;
// definig tail
Double_ll_node* tail=node1;
print(head);
insert_at_head(head,23);
print(head);
insert_at_tail(tail,25);
print(head);
// cout<<length_ll(head)<<endl;
return 0;
}