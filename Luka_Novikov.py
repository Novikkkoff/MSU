import random 
import math 
   
primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127] 
x1 = 2**123 
x2 = 2**128 
a=random.randint(0,15) + 5 
print("a = {}".format(a)) 
num = [] 
num.append(2) 
print("num[0] = {}".format(num[0])) 
flag = [0]*32 
flag[0] = 1 
 
k = 1 
while k <= a - 1: 
    i = random.randint(0,30) 
    if ~flag[i]: 
        num.append(primes[i]) 
        flag[i] = 1 
        print("num[{}] = {}".format(k, num[k])) 
        k += 1 
     
b = 1 
for k in range (0,a): 
    b *= num[k] 
while b < x1 - 1: 
    k = random.randint(0, a - 1) 
    b *= num[k] 
b = b+1 
t = 0 
S = int(math.log2(b)) 
for x1 in range (2, S + 1): 
    for i in range (0, a): 
        if pow(x1, int((b - 1)/num[k]), b) != 1 and pow(x1, int(b - 1), b) == 1: 
            t = 1        
if ~t: 
    print("b = {}".format(b)) 
else: 
    print("Error")


