#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int i, arr[n-1];
	    for(i=0; i<n-1; i++)
	        cin>>arr[i];
	    sort(arr, arr+n-1);
	    for(i=0; i<n-1; i++){
	        if(arr[i]!=i+1){
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	    if(arr[n-2] != n)
	        cout<<n<<endl;
	}
	return 0;
}