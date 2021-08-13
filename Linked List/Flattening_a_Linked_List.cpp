Node *merge(Node *r1, Node *r2){
    Node *curr = new Node(-1);
    Node *res = curr;
    while(r1!=NULL&&r2!=NULL)
    {
        if(r1->data<=r2->data){
            curr->bottom = r1;
            curr = curr->bottom;
            r1 = r1->bottom;
        }
        else{
            curr->bottom = r2;
            curr = curr->bottom;
            r2 = r2->bottom;
        }
        
        
    }
    if(r1==NULL){
        curr->bottom = r2;
    }
    else
        curr->bottom = r1;
    return res->bottom;
}
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL||root->next==NULL)
       return root;
   
   
   root->next = flatten(root->next);
   root = merge(root,root->next);
   return root;
   
}