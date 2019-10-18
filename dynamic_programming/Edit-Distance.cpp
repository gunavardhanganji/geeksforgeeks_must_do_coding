#include <iostream>
using namespace std;
int edit_distance(char x[], char y[], int m, int n){
    int i, j;
    int dp[m+1][n+1] = {0};
    for(i=0; i<=m; i++){
        for(j=0; j<=n; j++){
            if(i == 0 || j==0)
                dp[i][j] = max(i, j);
            else if(x[i-1] == y[j-1])
                dp[i][j] = dp[i-1][j-1] ;
            else
                dp[i][j] += min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
        }
    }
    return dp[m][n];
}

int main() {
	int t; cin>>t;
	while(t--){
	    int m, n, i;
	    cin>>m>>n;
	    char x[m], y[n];
	    for(i=0;i<m;i++)
	        cin>>x[i];
	    for(i=0;i<n;i++)
	        cin>>y[i];
	    cout<<edit_distance(x, y, m, n)<<endl;
	}
	return 0;
}