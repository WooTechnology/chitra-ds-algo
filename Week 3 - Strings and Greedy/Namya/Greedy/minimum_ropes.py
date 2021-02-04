def minCost(a,n) :
    heap = []
    for i in a:
        heapq.heappush(heap, i)
    '''add to minheap, keep popping 2 elements and insert the sum into the heap
    till size of heap > 1
    
    '''
    cost = 0
    while len(heap) > 1:
        f = heapq.heappop(heap)
        s = heapq.heappop(heap)
        cost += f + s 
        heapq.heappush(heap, f+s)
        
        
    return cost
