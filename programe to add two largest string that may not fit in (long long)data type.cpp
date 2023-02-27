#include<iostream>
#include<string>
using namespace std;

string reverse_str(string str){
	string ans;
	for(int i=str.size()-1;i>=0;i--){
		ans.push_back(str[i]);
	}
	return ans;
}

string Add_two_largest_num_str(string str1,string str2){
	int str1_size=str1.size(),str2_size=str2.size();
	if(str1_size>str2_size){
		swap(str1,str2);
		swap(str1_size,str2_size);
	}
	string result="";
	str1=reverse_str(str1);
	str2=reverse_str(str2);
	int carry=0;
	for(int i=0;i<str1_size;i++){
		int sum=((str1[i]-'0')+(str2[i]-'0')+carry);
		result.push_back((sum%10)+'0');
		carry=sum/10;
	}

	for(int i=str1_size;i<str2_size;i++){
		int sum=((str2[i]-'0')+carry);
		result.push_back((sum%10)+'0');
		carry=sum/10;
	}

	if(carry){
		result.push_back(carry+'0');
	}
	result=reverse_str(result);
	return result;
}

int main(){
  string str="1010122222222222222222212340886554454561223345674542222445566";
	string str1="00003243454878473742434837889798778547478748374621";
	cout<<Add_two_largest_num_str(str,str1);
}
