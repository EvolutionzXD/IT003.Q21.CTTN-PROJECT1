import numpy as np
import time
import os

def read_file(filepath):

    with open(filepath, 'r') as f:
        content = f.read().split()
        
    if not content:
        return 0, []
        
    n = int(content[0])
    data = [float(x) for x in content[1:n+1]]
    return n, data

def numpy_sort_time(data):
    arr = np.array(data)
    
    start = time.time()
    sorted_arr = np.sort(arr)
    end = time.time()
    
    return (end - start) * 1000.0



def main():
    for test_id in range(1, 11):
        filename = f"Data/test{test_id}.inp"
        
        if not os.path.exists(filename):
            print(f"TEST {test_id}| File not found: {filename}")
            continue
            
        n, data = read_file(filename)
        
        t_numpy = numpy_sort_time(data)
        
        print(f"TEST {test_id}|Numpy: {t_numpy:.0f}ms")

if __name__ == "__main__":
    main()
