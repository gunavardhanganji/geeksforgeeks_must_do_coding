#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    long long n; cin>>n;
	    if(floor(log2(n)) - log2(n) == 0)
	        cout<<"YES"<<endl;
	   else
	        cout<<"NO"<<endl;
	}
	return 0;
}