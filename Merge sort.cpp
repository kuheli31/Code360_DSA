void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp; // Temporary vector to store the sorted array after merging
    int left = low;   // Starting index of the left half (from low to mid)
    int right = mid + 1; // Starting index of the right half (from mid+1 to high)

    // Compare elements from both halves and merge them into the temp vector
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) { // If the left element is smaller or equal
            temp.push_back(arr[left]); // Add the left element to temp
            left++; // Move the left pointer
        } else { // If the right element is smaller
            temp.push_back(arr[right]); // Add the right element to temp
            right++; // Move the right pointer
        }
    }

    // If there are remaining elements in the left half, add them to temp
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If there are remaining elements in the right half, add them to temp
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the sorted elements from temp back to the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low]; // Adjust index using (i - low)
    }
}

void ms(vector<int>& arr, int low, int high) {
    if (low == high) { // Base case: If only one element, no sorting needed
        return; 
    }

    int mid = (low + high) / 2; // Find the midpoint of the current range

    ms(arr, low, mid); // Recursively sort the left half of the array
    ms(arr, mid + 1, high); // Recursively sort the right half of the array

    merge(arr, low, mid, high); // Merge the two sorted halves
}

void mergeSort(vector<int>& arr, int n) {
    // Initiates the recursive merge sort by calling the helper function
    ms(arr, 0, n - 1); // Sorts the entire array from index 0 to n-1
}
