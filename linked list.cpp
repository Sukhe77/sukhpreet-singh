#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};
void print(Node* n)
{
    while(n!=NULL)
    cout<<n->data;
    n=n->next;
}
main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
   
 
    head-> data = 10;
    head-> next = second;
    second-> data = 20;
    second-> next = third;
    third-> data = 30;
    third-> next = NULL;
    cout<<endl;
    cout<<head->data<<endl;
    cout<<second->data<<endl;
    cout<<third->data<<endl;
}
