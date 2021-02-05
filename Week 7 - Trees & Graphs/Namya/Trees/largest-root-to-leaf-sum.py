def roottoleaf(root, mxpth, s, d):
    if root == None:
        return 
    if root.left == None and root.right == None:
        s += root.data
        if d not in mxpth:
            mxpth[d] = s
        else:
            mxpth[d] = max(mxpth[d], s)
        return
    
    if root.left != None:
        roottoleaf(root.left, mxpth, s + root.data, d+1)
    if root.right != None:
        roottoleaf(root.right, mxpth, s + root.data, d+1)

def sumOfLongRootToLeafPath(root):
    #:param root: root of the given tree.
    mxpth = dict()
    d = 0
    s = 0
    roottoleaf(root, mxpth, s, 0)
    try:
        mx = sorted(mxpth.keys())[-1]
        return(mxpth[mx])
    except:
        return 0
