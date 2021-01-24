# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
   
    def isUnivalTree(self, root: TreeNode) -> bool:
        nd = []
        def dfs(root : TreeNode, nd : [list]):
        
            if root == None:
                return nd
            nd = dfs(root.left, nd)
            nd.append(root.val)
            nd = dfs(root.right, nd)
            return nd
        f = dfs(root, nd)
        print(f)
        return(len(set(f)) == 1)