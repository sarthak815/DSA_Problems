int getMiddle(Node *head)
{
   // Your code here
   Node *mid = head;
   Node *begin = head;
   if(head!=NULL){
   while(mid!=NULL&&mid->next!=NULL){
        mid = mid->next->next;
        begin = begin->next;
    }
   return begin->data;
   }
}