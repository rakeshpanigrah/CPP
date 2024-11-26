#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}

Node * deletefirst (Node * head){

    if(head == NULL){
        return head;
    }

    Node * temp = head;
    head = temp->next;
    free(temp);
    return head;
}

Node * deletelast( Node *head){

    if(head == NULL){
        return head;
    }

    if (head->next == NULL){
        delete(head);
        return head;
    }

    Node * curr = head;
    while(curr->next->next!= NULL){
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;
}

Node * deleteposition( Node * head, int position){
    Node * prev;
    Node * curr = head;

    if(head == NULL){
        return head;
    }
    if (position ==1){
        head = curr->next;
        delete(curr);
        return head;
    }
    for(int i = 0 ; i!=position-1;i++){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete(curr);
    return head;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next=new Node(30);
	head->next->next->next=new Node(40);
    head = deletefirst(head);
    head = deletelast(head);
    head = deleteposition(head,1);
	printlist(head);
}