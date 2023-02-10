#include<iostream>
#include<string>
#include<vector>
using namespace std;
void display(vector<string> &s){
    for(int i=s.size()-2;i>=0;i--){
        cout<<s[i]<<" ";
    }
}
int main(){
    vector<string> s;
    string str;
    cout<<"enter elements (press ok for exiting ):  ";
    for(int i=0;str!="ok";i++){
        cin>>str;
        s.push_back(str);

    }
    display(s);
}
