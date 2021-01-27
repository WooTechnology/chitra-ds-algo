def find3Numbers(A, arr_size, sum):
    s = set(A)
    for i in range(0, arr_size-1):
        s = set()
        curr_sum = sum - A[i]
        for j in range(i + 1, arr_size):
            if (curr_sum - A[j]) in s:
                #print("Triplet is", A[i]," ", A[j], ", ", curr_sum-A[j])
                return 1
            s.add(A[j])
    
    return 0
