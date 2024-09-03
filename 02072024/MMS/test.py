def count_good_prefixes(t, test_cases):
    results = []
    for case in test_cases:
        n = case[0]
        a = case[1]
        total_sum = sum(a)
        prefix_sum = 0
        count = 0
        for i in range(n):
            prefix_sum += a[i]
            if 2 * prefix_sum == total_sum:
                count += 1
        results.append(count)
    return results

# Input reading
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    test_cases.append((n, a))

# Processing and output
results = count_good_prefixes(t, test_cases)
for result in results:
    print(result)