#include<bits/stdc++.h>
using namespace std;
int longdistinct(string str){
    int size = str.length(), i;
    //queue<char> distinct;
    unordered_map<char, int> map;
    for(i=0; i<size; i++){
        if(map[str[i]]==0){
            map[str[i]]++;
            distinct.push(str[i]);
        }
    }
    // int count = 0;
    // while(!distinct.empty()){
    //     count++; 
    //     distinct.pop();
    // }
    // return count;

}
int main(){
    int t; cin>>t;
    cin.ignore();
    while (t--){
        string str;
        getline(cin, str);
        cout<<longdistinct(str)<<endl;
    }
    return 0;
}