#include<iostream>
#include<string>
const int MAX_Char=256;
int distinct_count(string str){
	vector<int> last(MAX_Char,-1);
	int dpsize=str.size();
	int dp[dpsize+1];
	dp[0]=1;
	for(int i=1;i<=dpsize;i++){
		dp[i]=2*dp[i-1];
		if(last[str[i-1]]!=-1){
			dp[i]=dp[i]-dp[last[str[i-1]]];
		}
		last[str[i-1]]=(i-1);
	}
	return dp[dpsize];
}
int main(){
	cout<<distinct_count("ggg");
}
