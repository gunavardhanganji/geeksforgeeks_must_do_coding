#include <iostream>
using namespace std;
int lis(int arr[], int n){
    int i,j, lis_[n];
    for(i=0;i<n; i++)
        lis_[i]=1;
    for(i=1;i<n; i++){
        for(j=0; j<i; j++){
            if(arr[j]<arr[i])
                lis_[i] = max(lis_[j]+1, lis_[i]);
        }
    }
    int max = lis_[0];
    for(i=1; i<n; i++){
        if(max<lis_[i])
            max = lis_[i];
    }
    return max;
}
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	    cout<<lis(arr, n)<<endl;
	}
	return 0;
}