#include<iostream>
using namespace std;

struct Node{
 int data;
 Node * next;
 Node(int value){
    data = value;
    next = NULL;
 }
};

void printlist(Node *head){
    if(head == NULL){
        return ;
    }
    Node *p = head;
    do
    {
        cout<<p->data<<" ";
        p = p->next;
    } while (p!=head);
    cout<<endl; 
}
Node *insertposition(Node *head,int value,int posi){
    Node *temp = new Node(value);
    if(head == NULL){
        temp->next= temp;
        return temp;
    }
    // insert at begning

    if(posi == 1){
        temp->next=head->next;
        head->next =temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
    // given position
    Node *curr = head;
    for(int i =1;i<posi-1;i++){
        curr= curr->next;
    }
    temp->next = curr->next;
    curr->next= temp;

    return head;
}


Node *insertend(Node *head,int value){
    Node *temp = new Node(value);

    if(head == NULL){
        temp->next= temp;
        return temp;
    }
   else{
    temp->next=head->next;
        head->next =temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
   }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    head = insertend(head,50);
    printlist(head);
    return 0;
}
