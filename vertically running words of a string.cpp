#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main(){
	string str="";
	string word="welcome to my world";
	char ch='a';
	char ch2='z';
	char ch3='m';
	for(int i=0;i<word.size();i++){
		for(int j=0;j<26;j++){
			if(ch==word[i]||word[i]==' '){
				continue;
			}
			Sleep(10);
			cout<<str;
			cout<<ch<<endl;
			Sleep(10);
			cout<<str;
			cout<<ch2<<endl;
			if(j<=12){
				Sleep(10);
				cout<<str;
				cout<<ch3<<endl;
				
			}
			ch2--;
			ch3--;
			ch++;
		}
		ch3='m';
		ch2='z';
		ch='a';
		str.push_back(word[i]);
	}
	cout<<str;
	return 0;
}
