#User function Template for python3

def dfs(i, j, n, m, vis, paths, path):
    
    if i < 0 or j < 0 or i >= n or j >= n:
        return

    if vis[i][j] == 1 or m[i][j] == 0:
        return
    
    if i == n - 1 and j == n - 1:
        paths.append(path)
        return
    
    
    vis[i][j] = 1
    dfs(i+1, j, n, m, vis, paths, path + 'D')
    dfs(i, j-1, n, m, vis, paths, path + 'L')
    dfs(i, j+1, n, m, vis, paths, path + 'R')
    dfs(i-1, j, n, m, vis, paths, path + 'U')
    
    #basic backtracking step to ensure that any other paths u are looking at also have the chance to go to that location
    vis[i][j] = 0
    #return

def findPath(arr, n):
    vis = []
    m = arr
    for i in range(n):
        vis.append([0 for j in range(n)])
    path = ''
    paths = []
    dfs(0, 0, n, m, vis, paths, path)
    return sorted(paths)
