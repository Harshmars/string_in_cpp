#include<iostrem>
#include<string>
using namespace std;
//idk why difficulty level is medium it was so easy to build
//question link :-  https://www.geeksforgeeks.org/look-and-say-sequence/
int main(){
	string str="abc";
	for(int i=0;i<str.size();i++){//fist loop is for string charcter a b c
		for(int j=0;j<str.size();j++){//this loop swap the value of abc which is in inner loop and swapped 
			char temp=str[i];           //from outer loop for example
			str[i]=str[j];              // abc (inner loop) when the value is 1 outer loop a will be swapped and so on
			str[j]=temp;                //https://www.youtube.com/watch?v=GuTPwotSdYw&t=206s video explanation
			cout<<str<<endl;
		}
	}
	return 0;
}
