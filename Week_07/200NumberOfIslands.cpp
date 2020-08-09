class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        r = grid.size();
        if (r == 0)
            return 0;
        c = grid[0].size();
        int nums = 0;

        for (int i = 0; i < r; i ++){
            for (int j = 0; j < c; j ++){
                if (grid[i][j] == '1'){
                    nums ++;
                    dfs(grid, i, j);
                }
            }
        }
        return nums;
    }
private:
    int r;
    int c;
    int dfs(vector<vector<char>>& grid, int i, int j)
    {
        grid[i][j] = '0';
        if (i > 0     &&  grid[i - 1][j] == '1')   dfs(grid, i - 1, j);
        if (i + 1 < r &&  grid[i + 1][j] == '1')   dfs(grid, i + 1, j);
        if (j > 0     &&  grid[i][j - 1] == '1')   dfs(grid, i, j - 1);
        if (j + 1 < c &&  grid[i][j + 1] == '1')   dfs(grid, i, j + 1);
        return 0;
    }
};
