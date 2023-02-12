#include<iostream>
#include<string>
using namespace std;
int maximume(int x,int y){
    return(x>y)?x:y;
}
int longest_common_palindrome(string str,int start,int end){
    if(start>end){
        return 0;
    }
    if(start==end){
        return 1;
    }
    if(str[start]==str[end]){
        return 2+longest_common_palindrome(str,start+1,end-1);
    }
    return maximume(longest_common_palindrome(str,start+1,end),longest_common_palindrome(str,start,end-1));
}
int main(){
    string str;
    cout<<"enter string :  ";
    cin>>str;
    cout<<"largest common palindrome ";
    cout<<longest_common_palindrome(str,0,str.size());
    return 0;
}
