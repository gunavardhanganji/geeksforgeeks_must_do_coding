#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i, j;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	        // approach 2
	        int max = arr[n-1];
	   for(i=n-2; i>=0; i--){
	       if(arr[i] >= max)
	            max = arr[i];
	       else
	            arr[i] = -1;
	   }
	   for(i=0; i<n; i++){
	       if(arr[i]!= -1)
	            cout<<arr[i]<<" ";
	   }
	   cout<<endl;
	   /* approach 1
	    for(i=0; i<n; i++){
	        bool flag = true;
	        for(j=i+1; j<n; j++){
	            if(arr[i] < arr[j]){
	                flag = false;
	                break;
	            }
	        }
	        if(flag == true)
	            cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	    */
	}
	return 0;
}