#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, s, i, j, sum;
	    cin>>n>>s;
	    int arr[n];
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	    for(i=0; i<n; i++ ){
	        sum =0;
	        for(j=i; j<n && sum < s; j++)
	            sum += arr[j]; 
	        if(sum == s)
	            break;
	    }
	    if(sum == s)
	       cout<<i+1<<" "<<j<<endl;
	    else
	       cout<<-1<<endl;
	}
	return 0;
}