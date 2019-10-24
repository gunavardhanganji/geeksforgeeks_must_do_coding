#include <iostream>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    int arra[32]= {0}, arrb[32] = {0}, i=0, j=0;
	    while(a!=0){
	        arra[i++] = a%2;
	        a = a/2;
	    }
	    while(b!=0){
	        arrb[j++] = b%2;
	        b = b/2;
	    }
	    int count =0 ;
	    for(int k = max(i, j); k>=0; k--){
	        if(arra[k] != arrb[k]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}