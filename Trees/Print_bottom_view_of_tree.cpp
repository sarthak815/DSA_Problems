class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> res;
        queue<pair<Node* ,int>> q;
        map<int,int> m;
      
        q.push({root, 0});
        while(!q.empty()){
            Node *temp = q.front().first;
            int h = q.front().second;
            q.pop();
            m[h]=temp->data;
            if(temp->left) q.push({temp->left, h-1});
            if(temp->right) q.push({temp->right, h+1});
            
        }
        for(auto x:m) res.push_back(x.second);
        return res;
    }
};