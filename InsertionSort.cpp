void InsertionSort(int *arr, const int n){
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && key < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}