# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

#The logic here is that u need to do a bfs and record the corresponding index
#if in a level the same indices are encountered, then u have to sort them and add them to the main dictionary alln
#this dictionary stores the indices and the positions as the keys, it has an array as the value to which the nodes are appended

class Solution:
    def verticalTraversal(self, root: TreeNode) -> List[List[int]]:
        alln = dict()
        index = 0
        qu = [[root, index]]
        
        #normal bfs is done here, with the addition of passing the index across
        
        while qu and root != None:
            nodes = dict()
            s = len(qu)
            for i in range(s):
                temp, idx = qu.pop(0)
                if idx not in nodes:
                    nodes[idx]= []
                nodes[idx].append(temp.val)
                if temp.left != None:
                    qu.append([temp.left, idx - 1])
                if temp.right != None:
                    qu.append([temp.right, idx + 1])
            
            #at every level the nodes are sorted and then it is appended to the existing dictionary
            for k, v in nodes.items():
                if k not in alln:
                    alln[k] = []
                alln[k] += sorted(v)
                
        alln = dict(sorted(alln.items(), key=lambda nodes: nodes[0]))
        topview = []
        for i, j in alln.items():
            topview.append(j)
        return(topview)
        
        
    #Could optimise it further
