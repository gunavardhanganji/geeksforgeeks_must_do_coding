#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int coins[n], amount, i, j;
        for(i=0; i<n; i++)
            cin>>coins[i];
        cin>>amount;
        int dp[amount+1] = {0};
        dp[0] = 1;
        for(i=0; i<n; i++){
            for(j=1; j<amount+1; j++ ){
                if(j>= coins[i]){
                    dp[j] += dp[j - coins[i]];
                }
            }
        }
        cout<<dp[amount]<<endl;
    }
	return 0;
}