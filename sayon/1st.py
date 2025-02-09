n = int(input("Enter the number of processes: "))

at = []
bt = []
ct = []
tat = []
wt = []


for i in range(0,n):
    at.append(int(input(f"Enter the arrival time : ")))


for j in range(0,n):
    bt.append(int(input(f"Enter the burst time : ")))


for k in range(0,n):
    if k == 0:
        ct.append( at[k] + bt[k] )
    else:
        if at[k] > ct[k - 1]:
            ct.append( at[k] + bt[k])
        else:
            ct.append( ct[k - 1] + bt[k])

print(ct)
for a in range (0,n):
    tat.append( ct[a]-at[a])
    
for b in range (0,n):
    wt.append( tat[b]-bt[b])
    
print(f"tat{tat}")
print(f"wt{wt}")

av_tat=(sum(tat)/5)
av_wt=(sum(wt)/5)

print(f" Average of tat:{av_tat}")
print(f" Average of wt:{av_wt}")
    