#include<iostream>
#include<string>
using namespace std;
//function
string count_and_say(int n){
	if(n==1) return "1";
	if(n==2) return "11";

	string str="11";
	for(int i=3;i<=n;i++){
		str+='$';
		int count=1;
		string temp="";
		for(int j=1;j<str.size();j++){
			if(str[j]!=str[j-1]){//if there are no similar numbers then stop increasing count
				temp+=count+'0';//adding the count
				temp+=str[j-1];//adding the number
				count=1;//reset the count by 1
			}
			else count++;//increasing the count
		}
		str=temp;//assign the result which is in temp to str.
	}
	return str;//return the ans
}
int main(){
	int n;
	cout<<"Enter term : ";
	cin>>n;//taking input of terms to the users
	cout<<count_and_say(n);
	return 0;
}
