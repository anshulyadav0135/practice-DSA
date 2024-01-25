#include<iostream>
using namespace std;

int check(string s1,string s2){
    if (s1.length()>s2.length()){
       return 1;
    }else if(s1.length()<s2.length()){
        return -1;
    }else{
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
            continue;
        }else{
        int x,y;
        x=s1[i];
        y=s2[i];
        if(x<y){
            return -1;
        }else if(x>y){
            return 1;
        }else{
            return 0;
        }
        }
    }
    return 0;
    }

}

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    string s1,s2,S1,S2;
    cin>>s1>>s2;

    for(int i=0;i<s1.length();i++){
        if(s1[i]>='a' && s1[i]<='z'){
            continue;
        }else{
            s1[i]=s1[i]+32;
        }
    }

    for(int i=0;i<s2.length();i++){
        if(s2[i]>='a' && s2[i]<='z'){
            continue;
        }else{
            s2[i]=s2[i]+32;
        }
    }



    cout<<check(s1,s2);


    




    return 0;
}