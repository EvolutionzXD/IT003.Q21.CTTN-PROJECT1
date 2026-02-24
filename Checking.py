import numpy as np
from SortingAlgorythm.Python.HeapSort import HeapSort
from SortingAlgorythm.Python.MergeSort import MergeSort
from SortingAlgorythm.Python.QuickSort import QuickSort
import time
import os
import sys


def read_file(filepath):
    with open(filepath, 'r') as f:
        content = f.read().split()
        
    if not content:
        return 0, []
        
    n = int(content[0])
    data = [float(x) for x in content[1:n+1]]
    return n, data

def NumpySortTime(data):
    arr = np.array(data)
    
    start = time.time()
    sorted_arr = np.sort(arr)
    end = time.time()
    
    return (end - start) * 1000.0

def HeapSortTime(data):
    arr = list(data)

    start = time.time()
    HeapSort(arr)
    end = time.time()
    
    return (end - start) * 1000.0 

def MergeSortTime(data):
    arr = list(data)

    start = time.time()
    MergeSort(arr)
    end = time.time()
    
    return (end - start) * 1000.0

def QuickSortTime(data):
    arr = list(data)
    sys.setrecursionlimit(max(3000, len(arr) + 1000))

    start = time.time()
    QuickSort(arr)
    end = time.time()
    
    return (end - start) * 1000.0

def main():
    print(f"{'Test ID':<10} | {'Numpy':<10} | {'Heap':<10} | {'Merge':<10} | {'Quick':<10}")
    print("-" * 65)


    for test_id in range(1, 11):
        filename = f"Data/test{test_id}.inp"
        
        n, data = read_file(filename)

        t_numpy = NumpySortTime(data)
        t_heap = HeapSortTime(data)
        t_merge = MergeSortTime(data)
        t_quick = QuickSortTime(data)
        
        print(f"TEST {test_id:<5} | {t_numpy:>8.2f}ms | {t_heap:>8.2f}ms | {t_merge:>8.2f}ms | {t_quick:>8.2f}ms")

if __name__ == "__main__":
    main()

