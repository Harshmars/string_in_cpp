#include<iostream>
#include<string.h>
using namespace std;

// C++ program to find substring with equal
// number of 0's, 1's and 2's
int subsequence_with_equal_1s_2s_3s(string str){
	vector<string> num_string;
    //   creating substrings.
	for(int i=0;i<str.size();i++){
		for(int j=i;j<str.size();j++){
			string s="";
			for(int k=i;k<=j;k++){
				
				s+=str[k];
			}
			num_string.push_back(s);//storing substring to the num_string 
		}
	}
	int c0,c1,c2,count=0;
	//    iterating over array of all substrings
	for(int i=0;i<num_string.size();i++){
		c1=0,c0=0,c2=0;
		string sub_num_string = num_string[i];//for further breaking of the string
		for(int j=0;j<num_string[i].size();j++){
			if(sub_num_string[j]=='1')
				c1++;
			if(sub_num_string[j]=='0')
				c0++;
			if(sub_num_string[j]=='2')
				c2++;
		}//if count of every 0s,1s,and 2s are equal to each other 
		if(c0==c1&&c1==c2)
			count++;
	}
	return count;
}
int main(){
	string str="102100211";
	cout<<subsequence_with_equal_1s_2s_3s(str);
  return 0;
}
