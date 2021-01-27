def maximumMeetings(n,start,end):
    #based on end times, u need to choose
    
    events = sorted(zip(end, start))
    count = 1
    curr = events[0]
    for i in range(1, len(events)):
        if events[i][1] > curr[0]:
            count += 1
            curr = events[i]
            
    return count
    