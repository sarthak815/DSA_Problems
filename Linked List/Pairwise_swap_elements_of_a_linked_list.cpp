class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(head==NULL||head->next==NULL)
            return head;
        struct Node *curr = head;
        struct Node *n = head->next;
        struct Node *rem = head->next->next;
        n->next = curr;
        curr->next = pairWiseSwap(rem);
        
        
        return n;
    }
};