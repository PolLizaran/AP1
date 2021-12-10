from easyinput import read


def min_Max(M):
    n = len(M)
    result = []
    for i in range(n):
        mn = min(M[i])
        mx = M[0][i]
        for j in range(1, n):
            mx = max(M[j][i], mx)
        vec = [mn, mx]
        result.append(l)
    return result
