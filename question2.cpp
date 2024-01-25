#include<iostream>
#include<string>
using namespace std;

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

int first=0;
int second=0;
int third=0;

int temp=0;



string s;
cin>>s;

for(int i=0;i<s.length();i++){
    if(s[i]=='1'){
        first++;
    }else if(s[i]=='2'){
        second++;
    }else if(s[i]=='3'){
        third++;
    }else{
        continue;
    }
}

string str;
for(int i=0;i<first;i++){
    str.push_back('1');
    str.push_back('+');
}
for(int i=0;i<second;i++){
    str.push_back('2');
    str.push_back('+');
}
for(int i=0;i<third;i++){
    str.push_back('3');
    str.push_back('+');
}
str.pop_back();

cout<<str;



    return 0;
}