#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, k;
	    cin>>n;
	    cin>>k;
	    if((int)(n/pow(2, k))%2 == 1)
	        cout<<"Yes"<<endl;
	   else
	        cout<<"No"<<endl;
	}
	return 0;
}