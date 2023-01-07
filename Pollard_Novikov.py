import random 
import math 
s = int(input()) 
k = int(input()) 
t = 0 
i = 1 
while i < k: 
    k = random.randint(0, s) 
    fact = math.factorial(k) 
    j = pow(i, fact) - 1 
    j = j % k 
    if math.gcd(j, k)!= 1 and math.gcd(j,k)!=k: 
        i=k 
        t = 1 
        print(j) 
    i = i+1 
if ~t: 
    print(1)


