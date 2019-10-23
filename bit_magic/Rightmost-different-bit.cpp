#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n1, n2;
	    cin>>n1>>n2;
	    int arr1[32] = {0}, arr2[32] = {0}, i=0;
	    while(n1!=0){
	        arr1[i++] = n1%2;
	        n1=n1/2;
	    }
	    i=0;
	    while(n2!=0){
	        arr2[i++] = n2%2;
	        n2 = n2/2;
	    }
	    i=0;
	    bool flag = true;
	    while(i<32){
	        if(arr1[i] != arr2[i]){
	            flag = false;
	            break;
	        }
	        i++;
	    }
	    if(flag == false)
	        cout<<i+1<<endl;
	   else 
	        cout<<-1<<endl;
	}
	return 0;
}