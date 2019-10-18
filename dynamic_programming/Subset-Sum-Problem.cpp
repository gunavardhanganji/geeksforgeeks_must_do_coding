#include<bits/stdc++.h>
using namespace std;
int subsexist(int arr[], int n){
    int i, j, sum =0;
    for(i=0; i<n; i++)
        sum += arr[i];
    if(sum%2 !=0) //if sum is odd
        return false;
    sum = sum/2;
    bool dp[n+1][sum+1];
    for(i=0; i<=n; i++){
        dp[i][0]=true;
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=sum; j++){
            if(j-arr[i-1] >= 0)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i, j;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	    bool ans = subsexist(arr, n);
	    if(ans == true)
	        cout<<"YES"<<endl;
	   else
	    cout<<"NO"<<endl;
	}
	return 0;
}