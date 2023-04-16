#include<iostream>
#include<string>
using namespace std;

string int_to_str(int num){
	char ch;
	string res;
	if(num<10) return res+=ch=num+48;

	while(num!=0){
		int rem=num%10;
		ch=rem+48;
		res=ch+res;
		num/=10;
	}
	return res;
}
string findpositioning(string str1,string str2){
	int count=0,j,k=0;
	string res;
	string prv;
	for(int i=0;i<str1.size();i++){
		for(int j=i;j<str1.size();j++){
			for(int k=i;k<=j;k++){
				res+=str1[k];
			}
			if(res==str2){
				prv+=int_to_str(i);
				prv+=" ";
			}
			res="";
		}
	}
	return prv;

}
int main(){
	string str1="AABAACAADAABAABA";
	string str2="AABA";
	cout<<findpositioning(str1,str2);
	return 0;
}
