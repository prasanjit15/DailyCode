class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty())
            return 0;
        
        int countfresh = 0;
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        
        for(int i = 0; i<m;i++){
            for(int j = 0; j<n;j++){
                if(grid[i][j] == 1)
                    countfresh++;
                else if(grid[i][j] == 2)
                    q.push({i, j});
            }
        }
        
        int time = 0;
        vector<pair<int,int>> dirs= {{0,1}, {1,0}, {-1,0}, {0,-1}};
        
        while(countfresh != 0 && !q.empty()){
            int qsize = q.size();
            for(int i = 0; i<qsize;i++){
                int ri = q.front().first;
                int rj = q.front().second;
                q.pop();
                
                for(auto d:dirs){
                    int newx = ri + d.first;
                    int newy = rj + d.second;
                    
                    if(newx >=0 && newx <m && newy >= 0 && newy < n && grid[newx][newy] == 1){
                        grid[newx][newy] = 2;
                        countfresh--;
                        q.push({newx, newy});
                    }
                }
            }
            time++;
        }
        
        return countfresh == 0? time:-1;
    }
};