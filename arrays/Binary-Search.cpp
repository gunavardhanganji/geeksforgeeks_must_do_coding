int bin_search(int A[], int left, int right, int k)
{
    if(right>=left){
        int mid = left + (right-left)/2;
        if(A[mid] == k)
            return mid;
        if(A[mid]>k)
            return bin_search(A, left, mid-1, k);
        return bin_search(A, mid+1, right, k);
    }
    return -1;
}