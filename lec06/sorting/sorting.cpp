void bubbleSort(int a[], int n) {
    for(int i=n-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

// This does O(n^2) for the best case
void bubbleSortOptimized(int a[], int n) {
    for (int i = n - 1; i > 0; i--) {
        bool swapped = false; // Keep track of whether a swap occurred
        for (int j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true; // A swap occurred
            }
        }
        // If no swaps occurred in this pass, the array is sorted
        if (!swapped) {
            break;
        }
    }
}

void insertionSort(int a[], int n) {
    for(int i=1; i<n; i++) {
        int elemToInsert = a[i];

        // insert a[i] in correct position in the left side (0 to i-1)
        int j=i-1;
        while(j>=0 && a[j] > elemToInsert) {
            a[j+1] = a[j]; // push a[j] to the front (i.e., to j+1) to make space
            j--;
        }
        a[j+1] = elemToInsert;
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}