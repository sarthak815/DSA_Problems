
struct Node* reverseList(struct Node *head)
    {
        struct Node *next = NULL;
        struct Node *temp = head;
        struct Node *prev = NULL;
        while(temp!=NULL){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }