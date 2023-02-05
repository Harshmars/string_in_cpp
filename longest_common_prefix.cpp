#include<iostream>
#include<string>
using namespace std;
//finding longest common prefix

int findminlen(string arr[],int size){
    int minlen=100;
                  //finding smallest lenght amoung the strings
    for(int i=0;i<size;i++){
        if(arr[i].length()<minlen){
            minlen=arr[i].length();
        }
    }
    return minlen;
}
string find_largest_prefix(string arr[],int size){
    int minlen=findminlen(arr,size);
    string result;//for returning the longest prefix
    char current;//for finding common character amoung all string in series
    for(int i=0;i<minlen;i++){
        current=arr[0][i];
        for(int j=0;j<size;j++){
            if(arr[j][i]!=current){
                return result;
            }
        }
        result.push_back(current);
    }
    return result;
}
int main(){
    string arr[]={"apple","ape","app","aptitude"};
    int n=sizeof(arr)/sizeof(arr[0]);
    string ans=find_largest_prefix(arr,n);
    if(ans.length()){
        cout<<"the longest common prefix is ";
        cout<<ans;
    }
    else{
        cout<<"there's not any common prefix";
    }
}
