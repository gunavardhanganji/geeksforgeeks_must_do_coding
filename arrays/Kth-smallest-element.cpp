#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	    int k; cin>>k;
	    sort(arr, arr+n); //O(nlogn)
	    cout<<arr[k-1]<<endl;
	}
	return 0;
}