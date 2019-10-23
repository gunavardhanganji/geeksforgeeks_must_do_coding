#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[32]={0}, i=0,j ;
        while(n!=0){
            arr[i++] = n%2;
            n = n/2;
        }
        j=0;
        bool flag = false;
        while(j<=i){
            if(arr[j++] == 1 ){
                flag = true;
                break;
            }
        }
        if(flag == true)
            cout<<j<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}