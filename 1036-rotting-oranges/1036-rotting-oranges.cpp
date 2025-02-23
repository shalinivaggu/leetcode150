class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int minutes = 0 ;
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int,int>> q;
        for(int i = 0 ; i < rows ; i++) {
            for(int j = 0 ; j < cols ; j++) {
                if(grid[i][j] == 2) q.push({i,j});
            }
        }

        vector<pair<int, int>> offset = {{1,0} , {0,1} , {-1, 0} , {0,-1}};

        while(!q.empty()) {
            int l = q.size();
            bool hasFresh = false;
            while(l--) {
                auto [i , j] = q.front();
                q.pop();
                for(int k = 0 ; k < 4 ; k++) {
                    int x = i + offset[k].first;
                    int y = j + offset[k].second;
                    if (x < 0 || y  < 0 || x >= rows || y >= cols) continue ; 
                    if(grid[x][y] == 1) {
                        grid[x][y] = 2 ;
                        q.push({x,y});
                        hasFresh = true;
                    }
                }
            }
            if(hasFresh == true) minutes++;
        }

        for(int i = 0 ; i < rows ; i++) {
            for(int j = 0 ;  j < cols ; j++) {
                if(grid[i][j] == 1) return -1;
            }
        }
        return minutes;
    }
    
};