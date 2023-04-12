#include<iostream>
#include<string>
using namespace std;
string reduce_str(string str,int k,int *flag){
	int count=1;
	char ch;
	*flag=0;
	string result;
	for(int i=0;i<str.size();i++){
		if(str[i]==str[i+1]){
			count++;
		}
		else{
			count=1;
		}
		//----------repeated substring found----------//
		if(count==k){
			ch=str[i];
			*flag=1;
			break;
		}
	}
	
	for(int i=0;i<str.size();i++){
		//----------removing repeated substring----------//
		if(str[i]!=ch){
			result+=str[i];
		}
	}
	return result;
}
int main(){
	int flag=1;
	string str="geeksforgeeks";
	while(1){
		str=reduce_str(str,2,&flag);
		if(flag==0) break;
	}
	cout<<str;
	return 0;
}
