#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int arr[32], i=0, ans =0;
	    while(n!=0){
	        arr[i++] = n%2;
	        n = n/2;
	    }
	    arr[k] = 1;
	   while(i--){
	       ans += arr[i]*pow(2,i);
	   }
	   cout<<ans<<endl;
	}
	return 0;
}