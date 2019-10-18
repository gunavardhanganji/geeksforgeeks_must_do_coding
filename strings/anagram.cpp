#include<bits/stdc++.h>
using namespace std;
string anagram(string str1, string str2){
    if(str1.length() != str2.length())
        return "NO";
    unordered_map<int, int> map;
    int i, size=str1.length();
    for(i=0; i<size; i++){
        map[str1[i]]++;
    }
    for(i=0; i<size; i++){
        map[str2[i]]--;
    }
    bool flag = true;
    for(i=0; i<size; i++)
        if(map[str1[i]]>0)
            flag = false;
    if(flag == true)
        return "YES";
    return "NO";
}
int main(){
    int t; cin>>t;
    while (t--){
        string str1, str2;
        cin>>str1>>str2;
        cout<<anagram(str1, str2)<<endl;
    }
    return 0;
}