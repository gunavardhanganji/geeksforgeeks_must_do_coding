#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i, curr, sum;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	    curr = arr[0];
	    sum = arr[0];
	    for(i=1; i<n; i++){
	       curr = max(arr[i], curr+arr[i]);
	       sum = max(curr, sum);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}