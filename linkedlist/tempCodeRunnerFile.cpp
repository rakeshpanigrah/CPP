int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next=new Node(30);
	head->next->next->next=new Node(40);
    head = insertfirst(head,5);
    head = insertlast(head,50);
    head = insertposition(head,15,3);
	printlist(head);
}