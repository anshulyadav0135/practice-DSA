#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    int n;
    cin>>n;
    for(int a=0;a<n;a++){

        string str;
        cin>>str;
        vector <char> ans;
        stack <int> s;

        for(int i=0;i<str.size();i++){
            if(str[i]=='b'){
                int j=ans.size()-1;

                for(int k=ans.size()-1;k>=0;k--){
                    int x=ans[k];
                    if(x>=97 && x<=122){
                        ans.erase(ans.begin() + k);
                        break;
                    }else{
                        continue;
                    }
                }
            }
            else if(str[i]=='B'){
                int j=ans.size()-1;

                for(int k=ans.size()-1;k>=0;k--){
                    int x=ans[k];
                    if(x>=65 && x<=90){
                        ans.erase(ans.begin() + k);
                        break;
                    }else{
                        continue;
                    }
                }
            }
            else{
                ans.push_back(str[i]);
            }
        }
        for(int h=0;h<ans.size();h++){
            cout<<ans[h];
        }
        cout<<endl;




    }

    return 0;
}