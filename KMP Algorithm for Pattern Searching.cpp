#include<iostream>
#include<string>
using namespace std;

vector<int> findLPS(string pattern){
	int n=pattern.size();
	vector<int> lps(n);
	int j=0;
	for(int i=1;i<n;i++){
		while(j>0 &&pattern[i]!=pattern[j]){
			j=lps[j-1];
		}
		if(pattern[i]==pattern[j]){
			j++;
		}
		lps[i]=j;
	}
	return lps;
}

vector<int> KmpSearch(string text,string pattern){
	vector<int> lps=findLPS(pattern);
	vector<int> res;
	int n,m,j;
	n=text.size();
	m=pattern.size();
	j=0;
	for(int i=0;i<n;i++){
		while(j>0&&text[i]!=text[j]){
			j=lps[j-1];
		}
		if(text[i]==pattern[j]){
			j++;
		}
		if(j==m){
			res.push_back(i-m+1);
			j=lps[j-1];
		}
	}
	return res;

}
int main(){
	string text="AABAACAADAABAABA";
	string pattern="AABA";
	vector<int>res=KmpSearch(text,pattern);
	cout<<"Pattern found at index ";
	for(int i=0;i<res.size();i++){
		if(i==res.size()-1){
			cout<<"and ";
		}
		cout<<res[i]<<" ";
	}
	return 0;
}
