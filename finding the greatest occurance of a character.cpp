#include<iostream>
#include<string>
using namespace std;
//finding the greatest occurance of a character
int main(){
    string str;
    cout<<"enter name :  ";
    cin>>str;
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    char ans='a';
    int mxf=0;
    for(int i=0;i<26;i++){
        if(freq[i]>mxf){
            mxf=freq[i];
            ans=i+'a';
        }
    }
    cout<<mxf<<ans;
}
