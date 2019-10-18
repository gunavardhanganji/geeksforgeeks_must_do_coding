#include <bits/stdc++.h>
using namespace std;
int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
    return 0;
}
int atoi(string str)
{
    int i, size = str.length();
    int arr[size], ans = 0;
    // ascii 'a' = 97, 'z'= 122
    if(str[0] != '-'){
        for(i=0; i<size; i++){
            int x = str[i] - '0';
            if(x<10 && x>=0){
                arr[i] = x;
                ans += arr[i]*pow(10, size-i-1);
            }
            else
                return -1;
        }
    }
    else if(str[0] == '-')
    {
        for(i=1; i<size; i++){
            int x = str[i] - '0';
            if(x<10 && x>=0){
                arr[i] = x;
                ans += arr[i]*pow(10, size-i-1);
            }
            else
                return -1;
        }
        ans = -1*ans;
    }
    return ans;
}