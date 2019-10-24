#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[32]={0}, i=0;
	    while(n!=0){
	        arr[i++] = n%2;
	        n = n/2;
	    }
	    int max = 0;
	    while(i--){
	        int count = 0;
	        for(int j =i; j>=0; j++){
	            if(arr[j] != 1)
	                break;
	           else
	                count++;
	        }
	        if(count>max)
	            max = count;
	    }
	    cout<<max<<endl;
	}
	return 0;
}