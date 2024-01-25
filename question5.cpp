#include<iostream>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;
    
    
    for(int k=0;k<n;k++){
        string str;
        cin>>str;
        string sty;
        int i=0,j=1;
        while(i<str.length() || j<str.length()){
            if(str[i]==str[j]){
                sty.push_back(str[i]);
                i=i+2;
                j=j+2;
            }else{
                sty.push_back(str[i]);
                i++;
                j++;
            }
        }
        
        cout<<sty<<endl;
    }
    return 0;
}