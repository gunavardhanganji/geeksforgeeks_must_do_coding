#include<bits/stdc++.h>
using namespace std;
string rmduplicates(string str){
    int size = str.length(), i;
    string s("");
    unordered_map<char, int> map;
    for(i=0; i<size; i++){
        if(map[str[i]]==0){
            map[str[i]]++;
            s += str[i];
        }
    }
    return s;
}
int main(){
    int t; cin>>t;
    cin.ignore();
    while (t--){
        string str;
        getline(cin, str);
        cout<<rmduplicates(str)<<endl;
    }
    return 0;
}