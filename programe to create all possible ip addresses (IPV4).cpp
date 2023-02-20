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

bool check(string str){


	for(int i=0;i<str.size();i++){
		if((str[i]>='0'&&str[i]<='9')==false){
			return false;
		}
	}
	int num=My_Atoi(str);

	if((num<=255&&num>=0)==false){
		return false;
	}
  
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

string generate(string &str,int n,int i,int j,int k){
	string s1=str.substr(0,i+1);
	string s2=str.substr(i+1,j-i);
	string s3=str.substr(j+1,k-j);
	string s4=str.substr(k+1,n-1-k);
	if(check(s1)&&check(s2)&&check(s3)&&check(s4)){
		return s1+'.'+s2+'.'+s3+'.'+s4;
	}
	return "";
}

int main(){
	string str;
	vector<string>ans;
	cout<<"enter number :  ";
	cin>>str;
	for(int i=0;i<str.size();i++){
		for(int j=i+1;j<str.size();j++){
			for(int k=j+1;k<str.size();k++){
				string subs=generate(str,str.size(),i,j,k);
				if(subs.size()>0&&subs[subs.size()-1]!='.'){
					ans.push_back(subs);
				}
			}
		}
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
  return 0;
}
