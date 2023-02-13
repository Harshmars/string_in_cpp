#include<iostream>
#include<string>
using namespace std;

string print_subs(string str,int start,int end){
	string result;
	for(int i=start;i<=end;i++){
		result.push_back(str[i]);
	}
	return result;
}


int main(){
	
	string str;
	cout<<"enter string :  ";
	cin>>str;
	string double_str=str+str;
	string input;
	string fres[100];
	cout<<"enter string to be checked with :  ";
	cin>>input;
	int size=double_str.size()/2;
	int start=1;
	int end=size;
	bool flag;
	
	//passing the vlaues with using loop.
	for(int i=0;i<size-1;i++){
		fres[i]=print_subs(double_str,start,end);
		//checking if any string mathces with input string.
		if(fres[i]==input){
			cout<<"yes";
			flag=true;
			break;
		}
		start++;
		end++;
	}
	if(flag==false){
		cout<<"no";
	}
	return 0;
}
