#include<iostream>
#include<string>
using namespace std;


//for adding the character before the string.
string add_str(char ch,string str){
	return str=ch+str;
}
string formatt_key(string str,int key){
	string no_hypen;
	string formatted_str;
	int count=0;
	//for removing the hypen from the string and add character to new string.
	for(int i=0;i<str.size();i++){
		if(str[i]!='-'){
			no_hypen.push_back(str[i]);
		}
	}

	//iterating the string with no hypen,order to add hypen accordingly to the key.
	for(int i=no_hypen.size()-1;i>=0;i--){
		
		if(count==key){
			formatted_str=add_str('-',formatted_str);
			count=0;
		}
		//if characters are in small letters then change them into capital.
		if(no_hypen[i]>='a'&&no_hypen[i]<='z'){
			formatted_str=add_str((no_hypen[i]-32),formatted_str);
		}
		//if letters are in uppercase or any special character exists, leave as they are.
		else{
			formatted_str=add_str(no_hypen[i],formatted_str);
		}
		count++;
	}
	return formatted_str;
}
int main(){
	string str="5F3Z-2e-9-w";
	int key=4;
	cout<<formatt_key(str,key);
  return 0;

}
