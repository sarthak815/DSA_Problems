class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    void trav(Node* root, Node* &prev, int &f){
        if(!root)
            return;
        trav(root->left, prev, f);
        if(prev!=NULL && root->data<=prev->data){
            f = 0;
            return;
        }
            
        prev = root;
        trav(root->right, prev,f);

    }
    
    bool isBST(Node* root) 
    {   
        int f = 1;
        Node *prev = NULL;
        trav(root, prev, f);
        return f;
    }
};