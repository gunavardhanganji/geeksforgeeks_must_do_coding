#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arrival[n], depart[n], i,j, count=0, ans =0;
	    for(i=0; i<n; i++)
	        cin>>arrival[i];
	   for(i=0; i<n; i++)
	        cin>>depart[i];
	   sort(arrival, arrival+n);
	   sort(depart, depart+n);
	   i=0; j=0;
	   while(i<n && j<n){
	       if(arrival[i] <= depart[j]){
	           count++;
	           i++;
	       }
	       else{
	           count--;
	           j++;
	       }
	       ans = max(count, ans);
	   }
	   cout<<ans<<endl;
	}
	return 0;
}