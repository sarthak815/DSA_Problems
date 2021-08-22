class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int cnt = -1;
        
        while(n>0){
            if(n%2!=0)
                cnt++;
            cnt++;
            n = n/2;
        }
        return cnt;
    }
};
