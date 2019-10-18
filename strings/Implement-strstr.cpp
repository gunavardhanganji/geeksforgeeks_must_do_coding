#include<bits/stdc++.h>
using namespace std;
int strstr(string str1, string str2){
    int i=0, size = str2.length();
    bool flag = false;
    while(i+size-1 < str1.length()){
        if(str1.substr(i, size) == str2){
            flag = true;
            break;
        }
        i++;
    }
    if(flag == true)
        return i;
    else
        return -1;
}
int main(){
    int t; cin>>t;
    while (t--){
        string str1, str2;
        cin>>str1>>str2;
        cout<<strstr(str1, str2)<<endl;
    }
    return 0;
}