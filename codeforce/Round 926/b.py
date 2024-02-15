import math

def min_cells_to_color(n, k):
    if k <= n:
        return 2 if k == n or k == n - 1 else 1
    else:
        return math.ceil((2 * k - n) / (n - 1))

# Read the number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Read inputs
    n, k = map(int, input().split())
    # Output the result for the current test case
    if k <= n + 1:
        print(2)
    else:
        print(min_cells_to_color(n, k))
