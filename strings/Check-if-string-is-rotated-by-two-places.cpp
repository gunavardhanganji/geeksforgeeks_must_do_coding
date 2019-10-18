#include<bits/stdc++.h>
using namespace std;
void leftrotate(string &s, int d) 
{ 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
} 
bool rightrotate(string &s, int d) 
{ 
   leftrotate(s, s.length()-d); 
   return true;
}
int main(){
    int t; cin>>t;
    while (t--){
        string str1, str2;
        cin>>str1;
        cin>>str2;
        if(str1.length() == str2.length()){
            if(str1.length()>2){
                leftrotate(str1, 2);
                if(str2.compare(str1)==0)
                    cout<<'1'<<endl;
                else if(str2.compare(str1)!=0){
                    rightrotate(str1, 4);
                    if(str2.compare(str1)==0)
                        cout<<'1'<<endl;
                    else
                        cout<<"0"<<endl;
                }
                else
                    cout<<'0'<<endl;
            }
            else if(str1.length()==2 && str1[0] == str2[1] && str1[1] == str2[0]){
                cout<<'1'<<endl;
            }
            else if(str1.length() == 1 && str1 == str2)
                cout<<'1'<<endl;
            else
                cout<<'0'<<endl;
        }
    }
    return 0;
}