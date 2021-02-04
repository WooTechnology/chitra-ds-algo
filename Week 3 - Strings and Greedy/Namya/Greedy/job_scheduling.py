    jbs = []
    mx = 1
    for i in Jobs:
        mx = max(i.deadline, mx)
        jbs.append([i.deadline, i.profit])
    jbs = sorted(jbs, key = lambda element : element[1], reverse = True)
    slots = [-1 for i in range(mx)]
    cnt = 0
    pft = 0
    for i in range(len(jbs)):
        deadline, profit = jbs[i][0] - 1, jbs[i][1]
        if slots[deadline] == -1:
            slots[deadline] = 1
            pft += profit
            cnt += 1
        else:
            for j in range(deadline, -1, -1):
              if slots[j] == -1:
                  slots[j] = 1
                  pft += profit
                  cnt += 1
                  break
        #print(slots)
    return cnt, pft
