#include<iostream>
#include<string>
using namespace std;

//sorting the string.
string sort_str(string str){
	int i,j;
	for(i=0;i<str.size();i++){
		for(j=i+1;j<str.size();j++){
			if(str[i]>str[j]){
				char temp;
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	return str;
}

//this function returns the sizes of the matched character 
int find_count(string dtr,string str){
	int count=0;
	str=sort_str(str);
	dtr=sort_str(dtr);
	for(int i=0,j=0;i<str.size();){
		if(str[i]==dtr[j]){
			i++;
			j++;
			count++;
		}
		else{
			i++;
		}
	}
	return count;

}

int main(){
	vector<string>str={"correct", "ace", "coffee", "car"} ;
	vector<int> sizes;
	string dtr="acerffeo";
	int max_val=-9999;
	//passing the every values of str and dtr to find the count of matched characters.
	for(int i=0;i<str.size();i++){
		if(find_count(str[i],dtr)>max_val){
			max_val=find_count(str[i],dtr);
		}
		sizes.push_back(find_count(str[i],dtr));
	}
	//comparing the sizes of matched characters to the str so that returning the correct word
	for(int i=0;i<sizes.size();i++){//for example:
		if(sizes[i]==max_val){      //in the string str "apple" and "harry" both have same str.size();
			cout<<str[i];          // so in order to print the correct string it required to compare
		}                          //because in the str "apple" and "harry" dtr "baleppbcd" matches with
	}                              // apple. so it must be compared.
}
