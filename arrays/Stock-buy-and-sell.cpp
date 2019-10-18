#include <bits/stdc++.h>
using namespace std;
queue<pair<int, int>> days;
void buysell(int low, int arr[], int n){
    int i= low;
    while(i+1 <n){
        if(arr[i] < arr[i+1])
            i++;
        else
            break;
    }
    if(i>low)
        days.push(make_pair(low, i<n?i:i-1));
    if(i+1<n)
        buysell(i+1, arr, n);
}
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n], i;
	    for(i=0; i<n; i++)
	        cin>>arr[i];
	   buysell(0, arr, n);
	   if(!days.empty()){
    	   while(!days.empty()){
    	        cout<<"("<<days.front().first<<" "<<days.front().second<<")"<<" ";
    	        days.pop();
    	    }
	   }
	   else
	        cout<<"No Profit";
	   cout<<endl;
	}
	return 0;
}