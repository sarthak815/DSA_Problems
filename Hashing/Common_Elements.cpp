
class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        int arr[100001] = {0};
        for(int i=0;i<v1.size();i++){
            arr[v1[i]]++;
        }
        vector<int> res;
        for(int i=0;i<v2.size();i++){
            if(arr[v2[i]]!=0){
                int k = v2[i];
                res.push_back(k);
                arr[v2[i]]--;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};