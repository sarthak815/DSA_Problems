class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if (head == NULL || head->next == NULL)
            return;
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL&&fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(slow==fast){
            slow = head;
            
            if(slow==fast)
                while(fast->next!=slow)
                    fast = fast->next;
            
            else{
                while(slow->next!=fast->next){
                    slow = slow->next;
                    fast = fast->next;
                }
            }
            
            fast->next = NULL;
            
        }
    
    }
};