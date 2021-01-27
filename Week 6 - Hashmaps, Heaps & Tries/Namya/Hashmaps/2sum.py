def find2Numbers(A, arr_size, sum):
    for i in range(0, arr_size-1):
       
        s = set()
        curr_sum = sum - A[i]
        if (curr_sum - A[j]) in s:
               return 1
        s.add(A[j])
    return 0
