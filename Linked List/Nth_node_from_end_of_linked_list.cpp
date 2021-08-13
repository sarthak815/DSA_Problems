int getNthFromLast(struct Node *head, int n)
{   
    if(head==NULL)
        return -1;
    struct Node *slow = head;
    struct Node *fast = head;
    for(int i=0;i<n;i++){
        if(fast==NULL)
            return -1;
        fast = fast->next;
    }
    if(fast==NULL){
        head = head->next;
        if(head!=NULL)
            return slow->data;
    }
    else{
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        return slow->data;
    }
 
    
    
}