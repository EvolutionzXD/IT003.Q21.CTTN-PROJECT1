void QuickSort(float arr[], int n){
    random_shuffle(arr, arr + n);
    QuickSort(arr, 0, n-1);
}