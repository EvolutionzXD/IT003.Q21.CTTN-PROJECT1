import numpy as np

def heapify(arr, n, i):
    best = i
    lf = (i << 1) + 1
    rt = (i << 1) + 2

    if lf < n and arr[best] < arr[lf]:
        best = lf
    if rt < n and arr[best] < arr[rt]:
        best = rt
    
    if i != best:
        arr[i], arr[best] = arr[best], arr[i]
        heapify(arr, n, best)

def HeapSort(arr):
    n = len(arr)
    for i in range(n//2 - 1, -1, -1):
        heapify(arr, n, i)
    
    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr, i, 0)

    return arr