//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1==NULL||head2==NULL)
        return -1;
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    
    while(ptr1!=ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        if(ptr1==ptr2){
            return ptr1->data;
        }
        if(ptr1==NULL)
            ptr1 = head2;
        if(ptr2 ==NULL)
            ptr2 = head1;
        
    }
    return ptr1->data;
}