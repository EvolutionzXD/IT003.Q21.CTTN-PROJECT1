#pragma once
#include <bits/stdc++.h>
using namespace std;

void MergeSort(int arr[], int L, int R){
    if (L >= R) return;
    int mid = (L + R) >> 1;
    MergeSort(arr, L, mid);
    MergeSort(arr, mid + 1, R);
    
    vector <int> tmp;
    int i = L, j = mid + 1;
    while(i <= mid || j <= R){
        if (i > mid){
            tmp.push_back(arr[j]);
            j ++;
            continue;
        }
        if (j > R){
            tmp.push_back(arr[i]);
            i ++;
            continue;
        }
        if (arr[i] < arr[j]){
            tmp.push_back(arr[i]);
            i ++;
        }
        else{
            tmp.push_back(arr[j]);
            j ++;
        }
    }
    for (int i = L; i <= R; i ++ ) arr[i] = tmp[i - L];
}

void MergeSort(int arr[], int n){
    MergeSort(arr, 0, n-1);
}

void MergeSort(float arr[], int L, int R){
    if (L >= R) return;
    int mid = (L + R) >> 1;
    MergeSort(arr, L, mid);
    MergeSort(arr, mid + 1, R);
    
    vector <float> tmp;
    int i = L, j = mid + 1;
    while(i <= mid || j <= R){
        if (i > mid){
            tmp.push_back(arr[j]);
            j ++;
            continue;
        }
        if (j > R){
            tmp.push_back(arr[i]);
            i ++;
            continue;
        }
        if (arr[i] < arr[j]){
            tmp.push_back(arr[i]);
            i ++;
        }
        else{
            tmp.push_back(arr[j]);
            j ++;
        }
    }
    for (int i = L; i <= R; i ++ ) arr[i] = tmp[i - L];
}

void MergeSort(float arr[], int n){
    MergeSort(arr, 0, n-1);
}