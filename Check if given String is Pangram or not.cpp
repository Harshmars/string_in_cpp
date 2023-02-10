#include<iostream>
#include<string>
using namespace std;
int check_pangram(string str){
    int freq[26];
    int count=0;
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){//if frequency is more than 0 and count is reach to 26 means it is pangram
        char ch=i+'a';
        if(ch>='a'&&ch<='z'){
        if(freq[i]>0){
            count++;
        }
        }
    }
    count==26?cout<<"yes":cout<<"No";
}
int main(){
    check_pangram("The quick brown fox jumps over the lazy dog");//this only works on small letter(capital letters does not count).:(
}
