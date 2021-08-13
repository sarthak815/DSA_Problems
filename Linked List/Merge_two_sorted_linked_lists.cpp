struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    struct Node *res = NULL;
    if(a==NULL)
        return b;
    else if(b==NULL)
        return a;
    if(a->data<=b->data){
        res = a;
        res->next = SortedMerge(a->next,b);
    
    }
    else{
        res = b;
        res->next = SortedMerge(a,b->next);
    }
    return res;
}