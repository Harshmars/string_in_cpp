#include<stdio.h>
#inlcude<string>
string clearstr(string str){
    char ch;
    for(int i=0;i<str.size();i++){
        str.pop_back();
    }
    return str;
}
int main(){
    string str="ajbkcjldjfd sldkfjd";
    clearstr(str);
    cout<<str;
}
