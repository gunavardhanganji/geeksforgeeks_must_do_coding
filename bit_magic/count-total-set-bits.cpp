#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[32], i, j, count=0, num;
	    for(i=1; i<=n; i++){
	        j=0; num = i;
	        while(num!=0){
	            arr[j++] = num%2;
	            num = num/2;
	        }
	        while(j--)
	            if(arr[j] == 1)
	                count++;
	       arr[32] = {0};
	    }
	    cout<<count<<endl;
	}
	return 0;
}