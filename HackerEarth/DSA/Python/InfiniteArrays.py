'''
Infinite arrays
'''
for _ in range(int(input())):
 n = int(input())
 arr = list(map(int, input().split()))
 carr = [0]
 for x in arr + arr:
  carr.append(carr[-1] + x)
 sum_arr = carr[n]
 q = int(input())
 larr = list(map(int, input().split()))
 rarr = list(map(int, input().split()))
 
 res = []
 for l, r in zip(larr, rarr):
  q1, r1 = divmod(l - 1, n)
  q2, r2 = divmod(r, n)
  if r1 > r2:
   q2 -= 1
   r2 += n
  res.append(((q2 - q1) * sum_arr + carr[r2] - carr[r1])%(1000000007))
 print(" ".join(map(str, res)))
 