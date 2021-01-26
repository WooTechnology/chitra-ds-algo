# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import Counter

#This is brute force, leading to TLE
#need to optimise further

class Solution:
    
    def canMakePalindrom(self, s):
        return sum(v % 2 == 1 for v in Counter(s).values()) <= 1
    
    def dfs(self, root, paths, path):
        if root == None:
            return 
        if root.left == None and root.right == None:
            path.append(root.val)
            if self.canMakePalindrom(path):
                paths.append(path)
            return 
    
        if root.left != None:
            self.dfs(root.left, paths, path + [root.val])
        if root.right != None:
            self.dfs(root.right, paths, path + [root.val])
        
        
    def pseudoPalindromicPaths (self, root: TreeNode) -> int:
        if root == None:
            return 0
        if root.left == None and root.right == None:
            return 1
        paths = []
        path = []
        bit = '000000000'
        self.dfs(root, paths, path)
        count = 0 
        return len(paths)