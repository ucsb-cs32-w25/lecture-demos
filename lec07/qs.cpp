void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/**
 * Function to partition the array and return the pivot index
 * arr: input array
 * low: starting index for partitioning
 * high: end index for partitioning
 */
int partition(int arr[], int low, int high) {
    // Step 1: intialize pivot
    int pivot = arr[high];
    
    // Step 2: initialize i
    // remember i tracks the boundary between smaller elements and rest
    int i = low; 

    // the j "explorer" loop
    // remember j compares each element with pivot and swaps with i
    // Step 3: fix the for loop initialization and condition
    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);  // Swap arr[i] and arr[j]
            ++i;  // Increment i to track the boundary
        }
    }

    swap(arr[i], arr[high]);  // Place the pivot in its correct position
    
    // Step 4: return the index of pivot
    return i;
}

/**
 * Recursive function to perform QuickSort
 * arr: input array
 * low: starting index for sorting
 * high: end index for sorting
 */
void quickSort(int arr[], int low, int high) {
    // check for base condition
    if(low < high) {
        // Step 5: call partition get the pivot index
        int pIndex = partition(arr, low, high); 

        // Step 6: Recursively sort the two parts of the partition
        // Step 6a: call quickSort on the left part
        quickSort(arr, low, pIndex - 1);

        // Step 6b: call quickSort on the right part
        quickSort(arr, pIndex+1, high);

    }
}