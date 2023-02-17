#include<iostream>
#include<string>


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

bool check(string str){

	// check if the string only contains digits
    // if not then return false
	for(int i=0;i<str.size();i++){
		if((str[i]>='0'&&str[i]<='9')==false){
			return false;
		}
	}
	int num=My_Atoi(str);//converting string into integer.

	// the string is valid if the number
    // generated is between 0 to 255
	if((num<=255&&num>=0)==false){
		return false;
	}

	// if the string is "00" or "001" or
    // "05" etc then it is not valid
	int count=0;
	int size=str.size();
	while(num!=0){
		count++;
		num=num/10;
	}
	if(size!=count){
		return false;
	}
	return true;
}

int main(){
	string str;
	cout<<"enter IP adress :  ";
	cin>>str;
	string sub_str;
	int dots=0;
	bool flag=true;

	// the number dots in the original
    // string should be 3
    // for it to be valid
	for(int i=0;i<str.size();i++){
		if(str[i]!='.'){
			sub_str.push_back(str[i]);
		}
		if(str[i]=='.'){
			flag=check(sub_str);
			if(flag==0){
				break;
			}
			sub_str="";
			dots++;
		}
	}
	/* valid IP string must contain 3 dots */
    // this is for the cases such as 1...1 where
    // originally the no. of dots is three but
    // after iteration of the string we find
    // it is not valid
	if(dots!=3){
		cout<<"false";
	}
	else{
		cout<<"true";
	}
}
