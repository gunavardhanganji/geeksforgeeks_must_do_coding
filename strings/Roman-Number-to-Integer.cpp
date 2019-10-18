#include<bits/stdc++.h>
using namespace std;
// Reference : https://roman-numerals.info/
int romantoint(string str){
    int size = str.length(), i = size-1, ans=0;
    while(i>=0){
        if(str[i] == 'I')
            ans += 1;
        else if(str[i]== 'V' && str[i-1] == 'I' ){
            ans += 4;
            i--;
        }
        else if(str[i]== 'V' && str[i-1] != 'I' )
            ans += 5;
        else if( str[i] == 'X' && str[i-1] == 'I'){
            ans += 9;
            i--;
        }
        else if( str[i] == 'X' && str[i-1] != 'I')
            ans += 10;    
        else if(str[i] == 'L' && str[i-1]  == 'X'){
            ans += 40;
            i--;
        }
        else if(str[i]== 'L' && str[i-1] != 'X' )
            ans += 50;
        else if(str[i] == 'C' && str[i-1]  == 'X'){
            ans += 90;
            i--;
        }
        else if(str[i]== 'C' && str[i-1] != 'X' )
            ans += 100;
        else if(str[i] == 'D' && str[i-1]  == 'C'){
            ans += 400;
            i--;
        }
        else if(str[i]== 'D' && str[i-1] != 'C' )
            ans += 500;
        else if(str[i] == 'M' && str[i-1]  == 'C'){
            ans += 900;
            i--;
        }
        else if(str[i]== 'M' && str[i-1] != 'C')
            ans += 1000;
        i--;
    }
    return ans;
}
int main(){
    int t; cin>>t;
    while (t--){
        string str;
        cin>>str;
        cout<<romantoint(str)<<endl;
    }
    return 0;
}