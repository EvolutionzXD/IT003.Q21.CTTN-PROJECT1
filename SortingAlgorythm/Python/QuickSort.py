import random

def partition(arr, L, R):
    # Random pivot to avoid worst case O(n^2) on sorted arrays
    pivot_idx = random.randint(L, R)
    arr[pivot_idx], arr[R] = arr[R], arr[pivot_idx]
    
    index = L

    for i in range(R - L):
        if arr[i + L] <= arr[R]:
            arr[i + L], arr[index] = arr[index], arr[i + L]
            index += 1

    arr[index], arr[R] = arr[R], arr[index]
    return index

def QuickSortRecursive(arr, L, R):
    if L >= R:
        return
    
    mid = partition(arr, L, R)

    QuickSortRecursive(arr, L, mid - 1)
    QuickSortRecursive(arr, mid + 1, R)

def QuickSort(arr):
    n = len(arr)
    QuickSortRecursive(arr, 0, n-1)

    return arr