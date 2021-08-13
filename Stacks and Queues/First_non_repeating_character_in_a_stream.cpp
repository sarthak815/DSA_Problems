class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    string str = "";
		    int n = s.length();
		    int arr[27]={0};
		    queue<char> q;
		    for(int i=0;i<n;i++){
		        q.push(s[i]);
		        arr[s[i]-'a']++;
		        while(!q.empty()){
		            
		            if(arr[q.front()-'a']>1){
		                
		                q.pop();
		                
		            }
		            else{
		                str += q.front();
		                break;
		            }
		        }
		        if(q.empty())
		            str += '#';
		    }
		    return str;
		}

};