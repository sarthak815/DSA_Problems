class Solution 
{
    public:
    
    bool issafe(int i, int j,int R, int C)
    {
    if (i >= 0 && i < R && j >= 0 && j < C)
        return true;
    return false;
    }
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        bool changed = true;
        int cnt = 0;
        int R = grid.size();
        int C = grid[0].size();
        int n =2;
        while(changed){
            changed = false;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[i].size();j++){
                   if (grid[i][j] == n) {
                        if (issafe(i + 1, j,R,C) && grid[i + 1][j] == 1) {
                            grid[i + 1][j] = grid[i][j] + 1;
                            changed = true;
                        }
                        if (issafe(i, j + 1,R,C) && grid[i][j + 1] == 1) {
                            grid[i][j + 1] = grid[i][j] + 1;
                            changed = true;
                        }
                        if (issafe(i - 1, j,R,C) && grid[i - 1][j] == 1) {
                            grid[i - 1][j] = grid[i][j] + 1;
                            changed = true;
                        }
                        if (issafe(i, j - 1,R,C) && grid[i][j - 1] == 1) {
                            grid[i][j - 1] = grid[i][j] + 1;
                            changed = true;
                        }
                    } 
                }
            }
            if(!changed)
                break;
            n++;
        }
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
    
                // if any orange is found to be
                // not rotten then ans is not possible
                if (grid[i][j] == 1)
                    return -1;
            }
        }
        return n-2;
        
    }
};