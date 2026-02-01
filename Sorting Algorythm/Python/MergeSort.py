import numpy as np

def MergeSortRecursive(arr, L, R):
    if L >= R:
        return
    mid = (L + R) >> 1
    MergeSortRecursive(arr, L, mid)
    MergeSortRecursive(arr, mid + 1, R)

    tmp = np.zeros(R - L + 1, dtype=arr.dtype)

    tmp_index = 0
    i = L
    j = mid + 1

    while i <= mid or j <= R:
        if i > mid:
            tmp[tmp_index] = arr[j]
            tmp_index += 1
            j += 1
            continue
        if j > R:
            tmp[tmp_index] = arr[i]
            tmp_index += 1
            i += 1
            continue
        if arr[i] < arr[j]:
            tmp[tmp_index] = arr[i]
            tmp_index += 1
            i += 1
        else:
            tmp[tmp_index] = arr[j]
            tmp_index += 1
            j += 1

    for i in range(R - L + 1):
        arr[L + i] = tmp[i]
    
def MergeSort(arr):
    n = len(arr)
    MergeSortRecursive(arr, 0, n - 1)
    return arr