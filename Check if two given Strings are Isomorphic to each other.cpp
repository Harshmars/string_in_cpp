#include<iostream>
#include<string>
using namespace std;
int frequency(string str){
    int rev=0;
    int freq[26];
    int count=0;
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            rev=rev*10+freq[i];
        }
    }
    return rev;
}
int reverse(int num){
    int rev=0;
    while(num!=0){
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}
int main(){
    int arr[100];
    string str1="aab";
    string str2="xxy";
    int alphabets1;
    int alphabets2;
    alphabets1=frequency(str1);
    alphabets2=frequency(str2);
    frequency(str2);
    if(alphabets1==alphabets2){
        cout<<"true";
    }
    else if(reverse(alphabets1)==alphabets2){
        cout<<"true";
    }
    else if(alphabets1==reverse(alphabets2)){
        cout<<"true";
    }
    else{
        cout<<"flase";
    }
  return 0;
}
