#sort the activites based on the end time, the next activity that will be picked is the one with a 
#greater than or equal to start time (considering the end time of the last activity)

start =  [6, 3, 0, 5, 1, 5]
finish = [10, 4, 6, 7, 2, 9]

activity = list(zip(start, finish))
activity.sort(key = lambda x: x[1])  
print(activity)

ac_s = activity[0][0]
ac_e = activity[0][1]

for st, en in activity:
    if st > ac_e:
        ac_s = st 
        ac_e = en 
        