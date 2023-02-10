#include<iostream>
#include<string>
using namespace std;
int anagram(string str1,string str2,int k){
    int freq[26];
    int freq2[26];
    int count=0;
    for(int i=0;i<26;i++){
        freq[i]=0;
        freq2[i]=0;
    }
    for(int i=0;i<str1.size();i++){//frequency of the first string characters
        freq[str1[i]-'a']++;
    }
    for(int i=0;i<str2.size();i++){//frequency of the second string characters
        freq2[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++){//subtracting first str character freq to second str freq
        if(freq[i]-freq2[i]>0){
            count++;
        }
    }
    if(count<=k){//return true by 1 or false by 0
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    string str1;//="geeks";//"ababaddccc";//"anagram";
    string str2;//="eggkf";//"bcbecabacd";//"grammer";
    cout<<"Enter two strings :  ";
    cin>>str1>>str2;
    cout<<"Enter maximume number if switchs :  ";
    int k;//=1;//3;
    cin>>k;
    int result=anagram(str1,str2,k);
    result==1?cout<<"Yes":cout<<"No"<<endl;
}
