#include <iostream>
using namespace std;
long merge(int arr[], int left[], int leftcount, int right[], int rightcount ){
    int i=0, j=0, k=0, count=0;
    while(i<leftcount && j<rightcount){
        if(left[i]<=right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
            count+= leftcount-i; //important
            //At any step if a[i] > a[j], then there are (leftcount -i) inversions,
            //Beacuse left and right sub arrays are already sorted, so all the remaining elements 
            // in the left sub array will be greater than a[j]
        }
    }
    while(i<leftcount){
        arr[k++] = left[i++];
    }
    while(j<rightcount){
        arr[k++] = right[j++];
    }
    return count;
}
long mergesort(int arr[], int n){
    int mid, i;
    if(n<2)
        return 0; //if the array has less tan two elements do nothing
    mid = n/2;
    int* left = (int*)malloc(mid*4);
    int* right = (int*)malloc((n-mid)*4);
    for(i=0; i<mid; i++)
        left[i] = arr[i];
    for(i=mid; i<n; i++)
        right[i-mid] = arr[i];
    // free(left);
    // free(right);
    return mergesort(left, mid)+mergesort(right, n-mid)+ merge(arr, left, mid, right, n-mid);
}
int main() {
	int t;cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i, j;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	   // O(nlogn) approah using merge sort
	   cout<<mergesort(arr, n)<<endl;
	   	   // O(n^2) approach
	   // for(i=0; i<n; i++){
	   //     for(j=i+1; j<n; j++){
	   //         if(arr[i] > arr[j])
	   //             count++;
	   //     }
	   // }
	}
	return 0;
}