int binarySearch(int x, int a[], int high) {
    int low = 0;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (x < a[mid])
            high = mid - 1;
        else if (x > a[mid])
            low = mid + 1;
        else
            return mid;
    }
    return low;
}

void binaryInsertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int extract = a[i];

        int location = binarySearch(extract, a, j);

        while (j >= location) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = extract;
    }
} 