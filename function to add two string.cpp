#inlcude<iostream>
#inlcude<string>

string add(string s1,string s2){
    string result;
    char ch;
    char ch2;
    for(int i=0;i<s1.size();i++){
        ch=s1[i];
        result.push_back(ch);
    }
    for(int i=0;i<s2.size();i++){
        ch=s2[i];
        result.push_back(ch);
    }
    return result;
}
int main(){
    string s1="fam";
    string s2="ily";
    cout<<add(s2,s1);
}
