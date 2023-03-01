#include<iostream>
#include<string>
using namespace std;

int find_max(int a,int b){
	return a>b?a:b;
}
int find_min(int a,int b){
	return a>b?b:a;
}

string reverse_str(string str){
	string ans;
	for(int i=str.size()-1;i>=0;i--){
		ans.push_back(str[i]);
	}
	return ans;
}

int main(){
	string str1;
	string str2;
	cout<<"Enter two number that is to be multiplied :  ";
	cin>>str1>>str2;
	
	int str1_size=str1.size()-1;
	int str2_size=str2.size()-1;
	int carry=0;
	string result;
	for(int i=0;i<=str1_size+str2_size||carry;i++){
		for(int j=find_max(0,i-str2_size);j<=find_min(i,str1_size);j++){
			carry+=(str1[str1_size-j]-'0')*(str2[str2_size-i+j]-'0');
		}
		result.push_back(carry%10+'0');
		carry/=10;
	}
	result=reverse_str(result);
	cout<<result;
}
