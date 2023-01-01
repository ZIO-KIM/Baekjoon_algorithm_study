
# 1978 - 소수 찾기    
# https://www.acmicpc.net/problem/1978

N = int(input()) 
num_of_prime_number = 0
li = [*map(int,input().split())]

for item in li: 
    cnt = 0
    for j in range(1, item + 1): 
        if item % j == 0: 
            cnt += 1
    if cnt == 2: 
        num_of_prime_number += 1

print(num_of_prime_number)