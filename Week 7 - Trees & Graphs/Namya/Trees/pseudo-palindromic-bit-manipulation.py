# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import Counter

#This is brute force, leading to TLE
#need to optimise further

#since there are 10 possible digits 

#u can use bit manipulation
#at eevery occurence, u need to xor the number with itself
#i.e if the bit was set it becomes 0 else will become set
#thus since u need at a max of one bit to be set, it will be a power of 2

#thus checking if a number is a power of 2 (n & (n - 1)) == 0
#i.e 4  ===>  100  3 ===> 011 , so 4 & 3 gives 0, this is the check

class Solution:
    
    def canMakePalindrom(self, s):
        return sum(s) <= 1
    #use of xor, 1 ^ 1, 0 ^ 0 -> 0 , 1 ^ 0 or 0 ^ 1 = > 1
    
    def dfs(self, root, paths, bit):
        if root == None:
            return 
        if root.left == None and root.right == None:
                
            bit = bit ^ (1 << root.val)
            if bit & (bit -1)  == 0:
                paths.append(1)
            return 
        
        bit = bit ^ (1 << root.val)
        if root.left != None:
            self.dfs(root.left, paths, bit)
        if root.right != None:
            self.dfs(root.right, paths, bit)
        
        
    def pseudoPalindromicPaths (self, root: TreeNode) -> int:
        if root == None:
            return 0
        if root.left == None and root.right == None:
            return 1
        paths = []
        path = []
        bit = 0
        self.dfs(root, paths, bit)
        return len(paths)
    
    