#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i, j;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    for(i=0, j=n-1; i<=n/2-1, j>n/2; i++, j--)
	       cout<<arr[j]<<" "<<arr[i]<<" ";
	    if(n%2 ==0)
	        cout<<arr[n/2]<<" "<<arr[n/2 -1]<<endl;
	    else
	        cout<<arr[n/2]<<endl;
	}
	return 0;
}