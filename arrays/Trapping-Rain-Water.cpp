int trappingWater(int arr[], int n){
    int i, sum =0, left[n], right[n];
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for(i=1; i<n; i++){
        if(left[i-1] > arr[i])
            left[i] = left[i-1];
        else
            left[i] = arr[i];
    }
    for(i=n-2; i>=0; i--){
        if(right[i+1] > arr[i])
            right[i] = right[i+1];
        else
            right[i] = arr[i];
        sum += max(min(left[i], right[i]) - arr[i], 0);
    }
    return sum;
}