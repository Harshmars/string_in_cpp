#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter line :  ";
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            for(int j=i;j<str.size();j++){
                str[j]=str[j+1];
            }
        }
    }
    cout<<str;
}
