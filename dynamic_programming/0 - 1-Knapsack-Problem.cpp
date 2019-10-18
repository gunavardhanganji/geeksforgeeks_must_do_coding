#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, maxweight;
	    cin>>n>>maxweight;
	    int values[n], weights[n], i, j;
	    for(i=0; i<n; i++)
	        cin>>values[i];
	   for(i=0;i<n; i++)
	        cin>>weights[i];
	   int dp[n+1][maxweight+1];
	   for(i=0; i<=n; i++){
	       for(j=0; j<=maxweight; j++){
	           if(i==0 || j==0){
	               dp[i][j]=0;
	               continue;
	           }
	           if(j-weights[i-1]>=0)     
	                dp[i][j] = max(dp[i-1][j], values[i-1]+dp[i-1][j-weights[i-1]]);
	           else     
	                dp[i][j]=dp[i-1][j];
	       }
	   }
	   cout<<dp[n][maxweight]<<endl;
	}
	return 0;
}