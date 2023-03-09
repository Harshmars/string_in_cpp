#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="abc";
	string ans="";
	for(int i=0;i<str.size();i++){
		for(int j=i;j<str.size();j++){
			for(int k=i;k<=j;k++){
				char ch=k+'a';
				ans+=ch;
			}
			cout<<ans<<endl;
			ans="";
		}
	}
	return 0;
}
