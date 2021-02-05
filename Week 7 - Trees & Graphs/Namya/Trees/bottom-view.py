#same on the lines of vertical order traversal but u have to print the last value as opposed to top view where the first value is retained

def bottomView(root):
    #Write your code here
            nodes = dict()
            index = 0
            qu = [[root, index]]
            while qu and root != None:
                s = len(qu)
                for i in range(s):
                    temp, idx = qu.pop(0)
                    nodes[idx] = temp.data
                    if temp.left != None:
                        qu.append([temp.left, idx - 1])
                    if temp.right != None:
                        qu.append([temp.right, idx + 1])
            nodes = dict(sorted(nodes.items(), key=lambda nodes: nodes[0]))
            bottomview = []
            for i in sorted(nodes.keys()):
                bottomview.append(nodes[i])
            return(bottomview)

