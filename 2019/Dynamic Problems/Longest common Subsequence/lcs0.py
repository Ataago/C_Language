# Longest common Subsequence

x = "aab"
y = "abc"

def max(a, b):
    return a if a > b else b

def LCS(x, y):
    if not x or not y:
        return 0
    if x[-1:] == y[-1:]:
        return 1 + LCS(x[:-1], y[:-1])

    return max(LCS(x[:-1], y), LCS(x, y[:-1]))

print(LCS(x, y))

