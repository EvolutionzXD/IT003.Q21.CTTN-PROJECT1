#pragma once
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
    int best = i;
    int lf = (i << 1) + 1;
    int rt = (i << 1) + 2;

    if (lf < n && arr[best] < arr[lf]) best = lf;
    if (rt < n && arr[best] < arr[rt]) best = rt;

    if (i != best){
        swap(arr[i], arr[best]);
        heapify(arr, n, best);
    }
}

void HeapSort(int arr[], int n){
    for (int i = n/2 - 1; i >= 0; i -- ) heapify(arr, n, i);

    for (int i = n-1; i > 0; i -- ){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
