#include<iostream>
#include<string>
using namespace std;
int minimume(int x,int y){
    return(x<y)? x:y;    //for getting minimume ans amoung the strings.
}

int deleted_elements(string str,int start,int end){
    if(start>=end){
        return 0;
    }
    if(str[start]==str[end]){
        return deleted_elements(str,start+1,end-1);//if first and last character maching exclude them
    }                                               // and pass the string.
    //if first and last digit are not maching then
    //pass two strings lets assume string="aharsh"
    //1st string will be = "ahars"
    //2nd string will be ="harsh"
    return 1+minimume(deleted_elements(str,start+1,end),deleted_elements(str,start,end-1));
}
int main(){
    string str;
    cout<<"enter string :  ";
    cin>>str;
    cout<<deleted_elements(str,0,str.size()-1);
}
