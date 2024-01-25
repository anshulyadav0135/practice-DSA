#include<iostream>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);


    string str1;
    cin>>str1;
    string str2=str1;
    for (int i = 0; i < str1.length(); i++){
        int j;
        char min=i;
        for(j=i+1;j<str1.length();j++){
            if(str1[j]<str1[min]){
                min=j;
            }else{
                continue;
            }
        }
        swap(str1[i],str1[min]);
    }
    
    
   
    return 0;
}


 