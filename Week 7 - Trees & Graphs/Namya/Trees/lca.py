def lca(root, v1, v2):
    while root is not None:
        if root.info > v1 and root.info > v2:
            root = root.left
        elif root.info < v1 and root.info < v2:
            root = root.right
        else:
            return root
    return root
