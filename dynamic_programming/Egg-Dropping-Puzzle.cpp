#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int eggs, floors;
	    cin>>eggs>>floors;
	    int dp[eggs+1][floors+1]={0}, i, c=0;
	    for(i=0; i<=floors; i++){
	        dp[1][i] = i;
	    }
	    for(int e = 2; e <= eggs; e++){
            for(int f = 1; f <=floors; f++){
                dp[e][f] = INT_MAX;
                for(int k = 1; k <=f ; k++){
                    c = 1 + max(dp[e-1][k-1], dp[e][f-k]);
                    if(c < dp[e][f]){
                        dp[e][f] = c;
                    }
                }
            }
        }
	    cout<<dp[eggs][floors]<<endl;
	}
	return 0;
}