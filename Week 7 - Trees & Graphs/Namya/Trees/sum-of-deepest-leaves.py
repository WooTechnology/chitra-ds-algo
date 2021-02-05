# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

#simple bfs has been applied storing the sum of leaf node value sums

class Solution:
    def deepestLeavesSum(self, root: TreeNode) -> int:
        sums = dict()
        lvl = 0
        currsum = 0
        qu = [root]
        while qu and root != None:
            lvl += 1
            s = len(qu)
            for i in range(s):
                temp = qu.pop(0)
                if temp.left == None and temp.right == None:
                    if lvl not in sums:
                        sums[lvl] = 0 
                    sums[lvl] += temp.val
                if temp.left != None:
                    qu.append(temp.left)
                if temp.right != None:
                    qu.append(temp.right)
                    
        print(sums)
     
        mx = max(sorted(sums.keys()))
        print(sums)
        return(sums[mx])
