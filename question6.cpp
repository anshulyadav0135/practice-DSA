#include<iostream>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;

    int x=0;

    

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        
        if(s[1]=='+' || s[3]=='+'){
            x++;
        }else if(s[1]=='-' || s[3]=='-'){
            x--;
        }
    }
    
    cout<<x;




    return 0;
}