class Solution {
public:
    void dfs(vector<vector<char>>& grid , int i , int j , vector<vector<int>>& visited) {
        int m = grid.size();
        int n = grid[0].size();
        visited[i][j] = 1;
        if(i > 0 && grid[i-1][j] == '1' && visited[i-1][j] == 0) {
            dfs(grid , i-1 , j , visited);
        }

        if(i + 1 < m && grid[i+1][j] == '1' && visited[i+1][j] == 0) {
            dfs(grid , i+1 , j , visited);
        }

        if(j > 0 && grid[i][j-1] == '1' && visited[i][j-1] == 0) {
            dfs(grid , i , j-1 , visited);
        }

        if(j + 1 < n && grid[i][j+1] == '1' && visited[i][j+1] == 0) {
            dfs(grid , i , j+1 , visited);
        }

        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        vector<vector<int>> visited(m , vector<int> (n , 0));
        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                if(grid[i][j] == '1' && !visited[i][j]) {
                    count++;
                    dfs(grid , i , j , visited);
                }
            }
        }
        return count;
    }
};