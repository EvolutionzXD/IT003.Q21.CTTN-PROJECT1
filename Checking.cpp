#include <bits/stdc++.h>
#include "SortingAlgorythm/C++/MergeSort.h"
#include "SortingAlgorythm/C++/QuickSort.h"
#include "SortingAlgorythm/C++/HeapSort.h"

using namespace std;

int n;
float a[1000005];
float tmp[1000005];

void READFILE(string FILEPATH){
    ifstream FILE(FILEPATH);
    FILE >> n;
    for (int i = 0; i < n; i ++ )
        FILE >> a[i];
    FILE.close();
}

float MergeSortTime() {
    for (int i = 0; i < n; i++) tmp[i] = a[i];
    clock_t start = clock();
    MergeSort(tmp, n);
    clock_t end = clock();
    return (float)(end - start) * 1000.0 / CLOCKS_PER_SEC;
}

float QuickSortTime() {
    for (int i = 0; i < n; i++) tmp[i] = a[i];
    clock_t start = clock();
    QuickSort(tmp, n);
    clock_t end = clock();
    return (float)(end - start) * 1000.0 / CLOCKS_PER_SEC;
}

float HeapSortTime() {
    for (int i = 0; i < n; i++) tmp[i] = a[i];
    clock_t start = clock();
    HeapSort(tmp, n);
    clock_t end = clock();
    return (float)(end - start) * 1000.0 / CLOCKS_PER_SEC;
}

float CPPSortTime() {
    for (int i = 0; i < n; i++) tmp[i] = a[i];
    clock_t start = clock();
    sort(tmp, tmp + n);
    clock_t end = clock();
    return (float)(end - start) * 1000.0 / CLOCKS_PER_SEC;  
}

int main(){
    
    for (int Test = 1; Test <= 10; Test ++ ){
        READFILE("Data/test" + to_string(Test) + ".inp");
        cout << "TEST " << Test;
        cout <<"|HeapSort: " <<HeapSortTime() <<"ms";
        cout <<"|MergeSort: " << MergeSortTime() <<"ms";
        cout <<"|QuickSort: " << QuickSortTime() <<"ms";
        cout <<"|C++: "<<CPPSortTime()<<"ms";
        cout <<endl; 
    }
}
