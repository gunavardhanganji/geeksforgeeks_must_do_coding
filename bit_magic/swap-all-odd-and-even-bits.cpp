#include <iostream>
#include <cmath>
using namespace std;
void swaps(int arr[], int n){
    int i = n-1;
    while(i>0){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        i -=2;
    }
}
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[8] = {0}, i=0;
	    while(n!=0){
	        arr[i++] = n%2;
	        n = n/2;
	    }
	    swaps(arr, 8);
	    int ans = 0;
	    for(i=0; i<8; i++){
	        ans += arr[i]*pow(2 , i);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}