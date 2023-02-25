#include<iostream>
#include<string>
using namespace std;

//programe to add character into a string to a given position.
string add_character(string str,char ch,int position){
	string result;
	if(position>str.size())//if user enter place which is beyond the string size then
		return str+ch;//place the character just after the given string.

	for(int i=0;i<str.size()+1;i++){//taking (str.size()+1) because we're adding a character.
		if(i==position-1){//taking (position-1) becouse characters in string starts from "0".
			result.push_back(ch);
		}
		result.push_back(str[i]);
	}

	return result;//return a string 
}
int main(){
	string str;
	char ch='h';
	int position=10;
	cout<<"enter string :  ";
	cin>>str;
	cout<<"enter character :  ";
	cin>>ch;
	cout<<"enter position :  ";
	cin>>position;
	cout<<add_character(str,ch,position);
  return 0;
}
