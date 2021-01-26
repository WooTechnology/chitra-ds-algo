#User function Template for python3
def fractionalknapsack(W,Items,n):
    '''
    :param W: max weight which can be stored
    :param Items: List contianing Item class objects as defined in driver code, with value and weight
    :param n: size of Items
    :return: Float value of max possible value, two decimal place accuracy is expected by driver code
    
    {
        class Item:
        def __init__(self,val,w):
            self.value = val
            self.weight = w
    }
    '''
    # code here
    wbyv = []
    
    //ACTUALLY IT IS VALUE / WEIGHT TO GET HOW MANY U NEED TO PICK
    for i in range(len(Items)):
        ratio = Items[i].value / Items[i].weight
        index  = i
        wbyv.append([ratio, index, Items[i].weight, Items[i].value])

    wbyv = sorted(wbyv, reverse = True)
    pft = 0.0
    #print(wbyv)
    for i in range(len(wbyv)):
        #print(W)
        if W < 0:
            return pft
        elif W < wbyv[i][2]:
            pft += (W * wbyv[i][3]) / wbyv[i][2]
            return pft 
        else:
            W -= wbyv[i][2]
            pft += wbyv[i][3]
        
    return pft
