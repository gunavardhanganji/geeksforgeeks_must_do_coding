#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	    unordered_map<int, int> map;
	    for(i=0; i<n; i++){
	        map[arr[i]]++;
	    }
	    int max = map[arr[0]], element = arr[0];
	    for(i=1;i<n; i++){
	        if(max<map[arr[i]]){
	            max = map[arr[i]];
	            element = arr[i];
	        }
	    }
	    if(max>n/2)
	        cout<<element<<endl;
	    else
	        cout<<"-1"<<endl;
	}
	return 0;
}