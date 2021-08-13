class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        stack<node*> st;
        node *temp = head;
        node *res = NULL;
        node *prev = NULL;
        while(temp!=NULL){
            int i=0;
            while(temp!=NULL&&i<k){
                st.push(temp);
                temp = temp->next;
                i++;
            }
            while(!st.empty()){
                if(prev==NULL){
                    prev = st.top();
                    st.pop();
                    head = prev;
                }
                else{
                    prev->next = st.top();
                    prev = prev->next;
                    st.pop();
                }
            }
        }
        
        prev->next = NULL;
        return head;
    }
};