from collections import defaultdict
class Solution:
    def restoreArray(self, adjacentPairs: List[List[int]]) -> List[int]:
        graph = defaultdict(list)
        for pair in adjacentPairs:
            graph[pair[0]].append(pair[1])
            graph[pair[1]].append(pair[0])
        st = 0
        for k, v in graph.items():
            if len(v) == 1:
                st = k
                pth.append(k)
                break
        #simple dfs in a graph in python
        
        
        #maintain a seen set if seen then continue else perform the operation
        nums = []
        seen = set()
        def dfs(num):
            seen.add(num)
            for nn in graph[num]:
                if nn in seen:
                    continue
                dfs(nn)
            nums.append(num)
        dfs(st)
        return nums
