#include<bits/stdc++.h>
using namespace std;
string reverseit(string str){
    int size = str.length(), i;
    string s("");
    vector<string> vec;
    for(i=0; i<size; i++){
        if(str[i] != '.')
            s += str[i];
        else{
            vec.push_back(s);
            s.erase();
        }
    }
    vec.push_back(s);
    s.erase();
    reverse(vec.begin(), vec.end());
    for(i=0; i<vec.size()-1; i++){
        s += vec[i] + '.';  
    }
    s += vec[vec.size()-1];
    return s;
}
int main(){
    int t; cin>>t;
    while (t--){
        string str;
        cin>>str;
        cout<<reverseit(str)<<endl;
    }
    return 0;
}