
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i=0;i<x.length();i++){
            char ch = x[i];
            if(ch=='('||ch=='{'||ch=='[')
                st.push(ch);
            else{
                if(st.empty())
                    return false;
                switch(ch){
                    
                    case ')':
                        if(st.top()=='(')
                            st.pop();
                        else
                            return false;
                        break;
                    case ']':
                        if(st.top()=='[')
                            st.pop();
                        else
                            return false;
                        break;
                    case '}':
                        if(st.top()=='{')
                            st.pop();
                        else
                            return false;
                        break;
                    default:
                        break;
                }
            }
        }
        return st.empty();
    }

};