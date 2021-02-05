class Node:
    def __init__(self, info): 
        self.info = info  
        self.left = None  
        self.right = None 
        self.level = None 

    def __str__(self):
        return str(self.info) 

class BinarySearchTree:
    def __init__(self): 
        self.root = None

    def create(self, val):  
        if self.root == None:
            self.root = Node(val)
        else:
            current = self.root
         
            while True:
                if val < current.info:
                    if current.left:
                        current = current.left
                    else:
                        current.left = Node(val)
                        break
                elif val > current.info:
                    if current.right:
                        current = current.right
                    else:
                        current.right = Node(val)
                        break
                else:
                    break

"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.info (the value of the node)
"""
                        
                        
#do a bfs and as soon as a new index is encountered u have to set the index to that value only
                        #the keys are arranged in increasing order
def topView(root):
    #Write your code here
            nodes = dict()
            index = 0
            qu = [[root, index]]
            while qu and root != None:
                s = len(qu)
                for i in range(s):
                    temp, idx = qu.pop(0)
                    if idx not in nodes:
                        nodes[idx] = temp.info
                    if temp.left != None:
                        qu.append([temp.left, idx - 1])
                    if temp.right != None:
                        qu.append([temp.right, idx + 1])
            nodes = dict(sorted(nodes.items(), key=lambda nodes: nodes[0]))
            topview = []
            for i, j in nodes.items():
                topview.append(j)
            for i in topview:
                print(i, end = " ")
            return(topview)
        
