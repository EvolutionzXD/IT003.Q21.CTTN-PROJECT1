#pragma once
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int L, int R){
    int pivot = arr[R];
    int i = L;

    for (int j = L; j < R; j ++ ){
        if (arr[j] < pivot){
            swap(arr[j], arr[i]);
            i ++;
        }
    }
    swap(arr[i], arr[R]);
    return i;
}

void QuickSort(int arr[], int L, int R){
    if (L >= R) return;
    int p = partition(arr, L, R);
    QuickSort(arr, L, p-1);
    QuickSort(arr, p+1, R);
}

void QuickSort(int arr[], int n){
    random_shuffle(arr, arr + n);
    QuickSort(arr, 0, n-1);
}

int partition(float arr[], int L, int R){
    int pivot = arr[R];
    int i = L;

    for (int j = L; j < R; j ++ ){
        if (arr[j] < pivot){
            swap(arr[j], arr[i]);
            i ++;
        }
    }
    swap(arr[i], arr[R]);
    return i;
}

void QuickSort(float arr[], int L, int R){
    if (L >= R) return;
    int p = partition(arr, L, R);
    QuickSort(arr, L, p-1);
    QuickSort(arr, p+1, R);
}

void QuickSort(float arr[], int n){
    random_shuffle(arr, arr + n);
    QuickSort(arr, 0, n-1);
}