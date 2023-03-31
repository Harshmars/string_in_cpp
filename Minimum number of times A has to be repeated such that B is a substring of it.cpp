#include<stdio.h>
#include<string>
using namespace std;
bool is_substr(string str,string substr){
	int m=str.size(),n=substr.size();
	int i,j;
	for(i=0;i<=n-m;i++){
		for(j=0;j<m;j++){
			if(substr[i+j]!=str[j]) break;
		}
		if(j==m) return true;

	}
	return false;
}

int min_rep(string a,string b){
	int ans=1;
	string temp=a;
	while(temp.size()<b.size()){
		temp+=a;
		ans++;
	}
	if(is_substr(b,temp)) return ans;

	if(is_substr(b,temp+a)) return ++ans;
	
	return -1;
}

int main(){
	cout<<min_rep("abcd","cdabcdab");
  return 0;
}
