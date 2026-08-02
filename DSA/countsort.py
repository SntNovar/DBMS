nums = [8,6,4,7,8,0,2,4,6,5]
ans= nums.copy()
mx=max(nums)
count = [0]*(mx+1)

for num in nums:  
    count[num] +=  1

for i in range(1, mx+1): #prefix
    count[i] += count[i-1]

for num in reversed(nums): 
    count[num] -= 1
    pos = count[num]
    ans[pos] = num

print(ans)