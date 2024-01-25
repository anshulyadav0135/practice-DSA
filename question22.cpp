#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int precedence(string str){
    if(str[0]=='S'){
        return 1;
    }
    if(str[0]=='M'){
        return 2;
    }if(str[0]=='L'){
        return 3;
    }
    int i=1;
    while(str[i]=='X'){
        i++;
    }
    if(str[i]=='S'){
        return 1;
    }
    if(str[i]=='M'){
        return 2;
    }if(str[i]=='L'){
        return 3;
    }
    return -1;
}

int count_x(string str){
    int ans=0;
    int i=0;
    while (str[i]=='X')
    {
        ans++;
        i++;
    }
    return ans;
    
}

// int precedence(string str){
//     if(str=="M"){
//         return 2;
//     }if(str=="S"){
//         return 1;
//     }if(str=="L"){
//         return 3;
//     }

// }

int main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        string s1,s2;
        cin>>s1;
        cin>>s2;

        if(precedence(s1)>precedence(s2)){
            cout<<">";
        }else if(precedence(s1)<precedence(s2)){
            cout<<"<";
        }else if (precedence(s2) == 3) {
    if (count_x(s1) > count_x(s2)) {
        cout << ">";
    } else if (count_x(s1) < count_x(s2)) {
        cout << "<";
    } else {
        cout << "=";
    }
} else if (precedence(s2) == 1) {
    if (count_x(s1) > count_x(s2)) {
        cout << "<";
    } else if (count_x(s1) < count_x(s2)) {
        cout << ">";
    } else {
        cout << "=";
    }
} else if(precedence(s2)==2){
    cout<<"=";
}



    cout<<endl;




    }



    return 0;
}