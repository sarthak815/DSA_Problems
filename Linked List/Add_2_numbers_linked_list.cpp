struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        stack<int> st1;
        stack<int> st2;
        struct Node* res=NULL;
        int c = 0;
        int k=0;
        while(first!=NULL){
            st1.push(first->data);
            first = first->next;
        }
        while(second!=NULL){
            st2.push(second->data);
            second = second->next;
        }
        if(st1.size()>=st2.size()){
            while(!st2.empty()){
                k = st1.top()+st2.top()+c;
                c=0;
                if(k>9){
                    k = k%10;
                    c=1;
                }
                struct Node* sum = new Node(k);
                sum->next = res;
                res = sum;
                st1.pop();
                st2.pop();
            }
            while(!st1.empty()){
                k = st1.top()+c;
                if(k>9){
                    c=1;
                    k = k%10;
                }
                else
                    c=0;
                struct Node* sum = new Node(k);
                sum->next = res;
                res = sum;
                st1.pop();
            }
            if(c>0){
                struct Node* sum = new Node(c);
                sum->next = res;
                res = sum;
                st1.pop();
            }
            
        }
        
        if(st1.size()<st2.size()){
            while(!st1.empty()){
                k = st1.top()+st2.top()+c;
                c=0;
                if(k>9){
                    k = k%10;
                    c=1;
                }
                struct Node* sum = new Node(k);
                sum->next = res;
                res = sum;
                st1.pop();
                st2.pop();
            }
            while(!st2.empty()){
                k = st2.top()+c;
                if(k>9){
                    c=1;
                    k = k%10;
                }
                else
                    c=0;
                struct Node* sum = new Node(k);
                sum->next = res;
                res = sum;
                st2.pop();
            }
            if(c>0){
                struct Node* sum = new Node(c);
                sum->next = res;
                res = sum;
                st1.pop();
            }
            
        }
        return res;
    }