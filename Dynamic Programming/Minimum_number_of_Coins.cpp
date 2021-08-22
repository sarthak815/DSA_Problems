class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        int coin[10] = {2000,500,200,100,50,20,10,5,2,1};
        int i=0;
        vector<int> res;
        while(i<10&&N>0){
            if(N>=coin[i]){
                N = N-coin[i];
                res.push_back(coin[i]);
            }
            else
                i++;
        }
        return res;
    }
};