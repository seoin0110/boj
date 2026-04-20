def make_non_decreasing_sequence(N, A):
    total_operations = 0
    for i in range(N - 1):
        if A[i] <= A[i + 1]:
            continue
        else:
            k = ((A[i] - 1) // A[i + 1]).bit_length()
            A[i + 1] *= (1 << k)
            total_operations += k
    return total_operations

# Read input
N, *rest = map(int, input().split())
if len(rest) < N:
    rest += map(int, input().split())
A = rest[:N]

# Get the minimum number of operations
result = make_non_decreasing_sequence(N, A)

# Output the result
print(result)
