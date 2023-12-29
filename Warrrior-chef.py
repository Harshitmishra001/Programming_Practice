def min_resistance_needed(T, test_cases):
    results = []

    for i in range(T):
        N, H, enemies= test_cases[i] 
        low, high=0,max(enemies) 
        while low<high:
            mid=(low+ high) // 2 
            total_strength_required = sum(max(0, enemy - mid) for enemy in enemies)

            if total_strength_required <= H: 
                high=mid

            else:
                low = mid + 1

        results.append(low)

    return results

T=int(input())
test_cases = []

for _ in range(T):
    N, H= map(int, input().split()) 
    enemies= list(map(int, input().split())) 
    test_cases.append((N, H, enemies))

results=min_resistance_needed(T, test_cases)
for res in results:
    print(res)