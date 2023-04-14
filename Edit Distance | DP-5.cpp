#include<iostream>
#include<string>
using namespace std;
//FIND MINIMUME VALUE FROM INSERT REMOVE AND REPLACE//
int min(int x,int y,int z){ return min(min(x,y),z); }

int edit_dist(string str1,string str2,int size1,int size2){

	//--IF STRING1 IS EMPTY--//
	if(size1==0) return size2;

	//--IF STRING2 IS EMPTY--//
	if(size2==0) return size1;

	//-----IF STRING1 LAST CHARACTER MATCHES WITH STRING2 LAST CHARACTER-----//
	if(str1[size1-1]==str2[size2-1]) return edit_dist(str1,str2,size1-1,size2-1);

				//------------INSERT------------// //------------REMOVE------------// //-------------REPLACE-------------//
	return 1+min(edit_dist(str1,str2,size1,size2-1),edit_dist(str1,str2,size1-1,size2),edit_dist(str1,str2,size1-1,size2-1));
}

int main(){
	string str1="sunday",str2="saturday";
	cout<<edit_dist(str1,str2,str1.size(),str2.size());
}
