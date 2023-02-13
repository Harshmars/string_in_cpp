// The atoi() function in C takes a string (which represents an integer) as an argument and returns its value of type int. 
// So basically the function is used to convert a string argument to an integer.
#include<iostream>
#include<string>
using namsespace std;
int My_Atoi(string str){
	int res=0;
	int i=0;
	int sign=1;
	if(str[0]=='-'){
		sign=-1;
		i++;
	}
	if(str[0]=='+'){sign=1;i++;}
	for(;str[i]!='\0';i++){
		res=res*10+str[i]-'0';
	}
	return res*sign;
}
int main(){
	string str;
	bool flag=false;
	int val;
	cout<<"enter number in a string : ";
	cin>>str;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]>='1'&&str[i]<='9'||str[0]=='-'||str[0]=='+'){val=My_Atoi(str);flag=true;}
		else{flag=false;break;}
	}
	if(flag==true){
		cout<<val;
	}
	else{
		cout<<"entred value does not contain only numbers";
	}
}
