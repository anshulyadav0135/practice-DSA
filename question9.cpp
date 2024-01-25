#include<iostream>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    string str;
    cin>>str;

    if(str[0]>='A' && str[0]<='Z'){
        cout<<str;
    }else{
        str[0]=str[0]-32;
        cout<<str;
    }
    


    return 0;
}