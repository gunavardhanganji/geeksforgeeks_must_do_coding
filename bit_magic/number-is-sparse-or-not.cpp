#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[32], i=0, j;
	    int f=0;
	    while(n!=0){
	        arr[i++] = n%2;
	        n = n/2;
	        if(arr[i-1]==1 && n%2==1){
	            f=1;
	        }
	    }
	    if(f==1){
	        cout<<0<<endl;
	    }
	    if(f==0){
	        cout<<1<<endl;
	    }
	}
	return 0;
}