def subArrayExists(arr,n):
    s = 0
    f = False
    sums = {0 : 1}
    for i in range(n):
        s += arr[i]
        if s in sums:
            f =  True
        sums[s] = 1
    return f

