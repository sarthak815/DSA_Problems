
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* end = head;
        while(end->next!=NULL)
            end = end->next;
        while(k>0){
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            end->next = temp;
            end =temp;
            k--;
        }
        return head;
    }
};
   