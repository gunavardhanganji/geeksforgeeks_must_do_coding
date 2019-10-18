#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n],sum =0, i, j;
	    for(i=0; i<n; i++){
	        cin>>arr[i];
	        sum += arr[i];
	    }
	    // approach 2
	    int leftsum =0;
	    bool flag = false;
	    for(i=0; i<n; i++){
	        sum -=arr[i];
	        if(sum == leftsum){
	            flag = true;
	            break;
	        }
	        leftsum += arr[i];
	    }
        if(flag == true)
            cout<<i+1<<endl;
        else
            cout<<-1<<endl;
	   /*
	   //approach 1
	   int  temp1[n]={0}, temp2[n]={0};
	   temp1[0] = arr[0];
	    for(i=0; i<n-1; i++)
	        temp1[i+1] = temp1[i] + arr[i+1];
	   temp2[n-1] = arr[n-1];
	    for(i=n-1; i>=0; i++)
	        temp2[i-1] = temp2[i] + arr[i-1];
	   for(i=0; i<n; i++){
	       if(temp1[i] == temp2[i]){
	            cout<<i<<endl;
	            break;
	       }
	   }
	   */
	}
	return 0;
}