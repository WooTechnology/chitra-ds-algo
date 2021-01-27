
#the solution times out 

import sys
class Solution:
    def dfs(self, i, j, m, n, grid, paths, path, min_path):
        if i < 0 or j < 0 or i >= m or j >= n or grid[i][j] == -1:
            return 
        
        if i == m - 1 and j == n - 1:
            path += grid[i][j]
            paths.append(path)
            if(path < min_path):
                min_path = path
            return
        
        val = grid[i][j]
        grid[i][j] = -1
        
        self.dfs(i + 1, j, m, n, grid, paths, path + val, min_path)
        self.dfs(i - 1, j, m, n, grid, paths, path + val, min_path)
        self.dfs(i, j + 1, m, n, grid, paths, path + val, min_path)
        self.dfs(i, j - 1, m, n, grid, paths, path + val, min_path)
        
        grid[i][j] = val
    
    
    def minPathSum(self, grid: List[List[int]]) -> int:
        paths = []
        min_path = sys.maxsize
        self.dfs(0, 0, len(grid), len(grid[0]), grid, paths, 0, min_path)
        print(min_path)
        try:
            return min(paths)
        except:
            return 0
