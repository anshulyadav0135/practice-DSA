#include<iostream>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    string str;
    cin>>str;

    int dis=1;
    for(int i=1;i<str.length();i++){
        int j;
        for(j=0;j<i;j++){
            if(str[j]!=str[i]){
                continue;
            }else{
                break;
            }

        }
        if(j==i){
            dis++;
        }

    }

    if(dis%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }



    return 0;
}