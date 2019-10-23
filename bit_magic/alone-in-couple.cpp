#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	   unordered_map <int, int > map;
	   for(i=0; i<n; i++)
	        map[arr[i]]++;
	   for(i=0; i<n; i++){
	       if(map[arr[i]] == 1){
	           cout<<arr[i]<<endl;
	           break;
	       }
	   }
	}
	return 0;
}