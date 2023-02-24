#include<iostream>
#include<string>
using namespace std;

//used for replacing the word to a given string.
string replace_with(string str,int start,int end,string key ){
	string final;
	for(int i=0;i<start;i++){
		final.push_back(str[i]);
	}
	final=final+key;
	for(int i=end;i<str.size();i++){
		final.push_back(str[i]);
	}
	return final;
}
//used for iterating and matching all the string to the key
string replace_substr(string str,string rep_word,string rep_with){
	string str_subs;
	string replaced;
	for(int i=0;i<str.size();i++){
		for(int j=i;j<str.size();j++){
			for(int k=i;k<=j;k++){
				str_subs+=str[k];
			}
			if(str_subs==rep_word){
				replaced=replace_with(str,i,j+1,rep_with);
				str=replaced;//if string repeats so it will contain the previous change
			}
			
			str_subs="";
		}
	}
	return replaced;
}
int main(){
	string str="what_is_diffrence_between_git_and_github";
	string replace_word="git";
	string rep_with="corn";
	cout<<replace_substr(str,replace_word,rep_with);
}
