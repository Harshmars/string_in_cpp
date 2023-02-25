#include<iostream>
#include<string>
using namespace std;

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

string add_str(char ch,string str){
	return ch+str;
}
int convert_binary_to_decimal(int num){
	int res=0;
	int s=1;
	while(num!=0){
		int rem=num%10;
		if(rem>1||rem<0){//checking if only binary digits exists
			return -1;
		}
		res+=(rem*s);
		s=s*2;
		num/=10;
	}
	return res;
}
string decimal_to_binary(int num){
	string result;
	while(num!=0){
		int rem=num%2;
		char ch=rem+'0';
		result=add_str(ch,result);
		num=num/2;
	}
	return result;
}

int main(){
	string str;//="11";
	string adding_str;//="11";
	cout<<"Enter two numbers that is to be added : ";
	cin>>str>>adding_str;

	int integer1=My_Atoi(str);//A variable that stores string binery value.
	int integer2=My_Atoi(adding_str);

	integer1=convert_binary_to_decimal(integer1);//in this step these variables stores
	integer2=convert_binary_to_decimal(integer2);//decimal value.

	if(integer1==-1||integer2==-1){//checking if only binary digits exists
		cout<<"one/both of string does not contains binery digit";
		return 0;
	}
	
	int res=integer1+integer2;//stores decimal addtion of two mentioned variables.

	string ans;
	ans=decimal_to_binary(res);//converting that decimal result into binery,storing
	cout<<ans;//in string form and printing that string.
	return 0;
}
