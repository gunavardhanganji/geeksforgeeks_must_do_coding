#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i;
	   for(i=0; i<n; i++)
	        cin>>arr[i];
	   sort(arr, arr+n);
	   for(i=0; i<n; i++)
	        cout<<arr[i]<<" ";
	   cout<<endl;
	}
	return 0;
}