

double findMedianSortedArrays(int* nums1, int nums1Size, 
                              int* nums2, int nums2Size) {
    
    int n = nums1Size;
    int m = nums2Size;
    int total = n + m;
    
    int *merged = (int*)malloc(sizeof(int) * total);
    
    int i = 0, j = 0, k = 0;
    
    // Merge step (your logic)
    while (i < n && j < m) {
        if (nums1[i] > nums2[j]) {
            merged[k++] = nums2[j++];
        } else {
            merged[k++] = nums1[i++];
        }
    }
    
    while (i < n) {
        merged[k++] = nums1[i++];
    }
    
    while (j < m) {
        merged[k++] = nums2[j++];
    }
    
    // Find median
    double median;
    
    if (total % 2 == 0) {
        median = (merged[total/2] + merged[(total/2) - 1]) / 2.0;
    } else {
        median = merged[total/2];
    }
    
    free(merged);
    
    return median;
}
    