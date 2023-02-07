#include<iostream>
#include<string>
using namespace std;
int char_to_num(char ch){
    switch(ch){
        case 'v':
        return 5;
        case 'i':
        return 1;
        case 'x':
        return 10;
        case 'l':
        return 50;
        case 'c':
        return 100;
        case 'd':
        return 500;
        case 'm':
        return 1000;
    }
}
int main(){
    string str;
    cout<<"enter roman number :  ";
    cin>>str;
    int res=char_to_num(str[str.length()-1]);
    for(int i=str.length()-2;i>=0;i--){
        int num=char_to_num(str[i]);
        if(num==res-char_to_num( str[i+1])){
            res+=num;
        }
        else if(res>num){
            res-=num;
        }
        
        else{
            res+=num;
        }
    }
    cout<<res;

}
