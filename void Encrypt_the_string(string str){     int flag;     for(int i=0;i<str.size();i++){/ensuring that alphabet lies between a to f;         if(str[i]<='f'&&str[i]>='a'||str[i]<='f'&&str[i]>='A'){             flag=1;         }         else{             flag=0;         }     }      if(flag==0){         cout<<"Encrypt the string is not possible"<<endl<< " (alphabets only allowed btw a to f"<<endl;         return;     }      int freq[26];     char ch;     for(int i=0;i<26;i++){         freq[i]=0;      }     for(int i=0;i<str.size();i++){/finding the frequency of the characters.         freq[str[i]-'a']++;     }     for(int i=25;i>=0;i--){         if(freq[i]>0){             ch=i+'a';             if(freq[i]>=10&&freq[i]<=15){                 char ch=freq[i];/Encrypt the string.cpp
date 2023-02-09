#inlcude<iostream>
#include<string>
using namespace std;
void Encrypt_the_string(string str){
    int flag;
    for(int i=0;i<str.size();i++){ //ensuring that alphabet lies between a to f;
        if(str[i]<='f'&&str[i]>='a'||str[i]<='f'&&str[i]>='A'){
            flag=1;
        }
        else{
            flag=0;
        }
    }

    if(flag==0){
        cout<<"Encrypt the string is not possible"<<endl<< " (alphabets only allowed btw a to f"<<endl;
        return;
    }

    int freq[26];
    char ch;
    for(int i=0;i<26;i++){
        freq[i]=0;

    }
    for(int i=0;i<str.size();i++){ //finding the frequency of the characters.
        freq[str[i]-'a']++;
    }
    for(int i=25;i>=0;i--){
        if(freq[i]>0){
            ch=i+'a';
            if(freq[i]>=10&&freq[i]<=15){
                char ch=freq[i];  // showing the encrypt of the string.
                char alphabet=ch+55;
                cout<<alphabet;
            }
            if(freq[i]>=1&&freq[i]<=9){
                cout<<freq[i];
            }
            cout<<ch;
            
        }
    }
    return;
}
int main(){
    string str;
    cout<<"enter string(only alphabets (btw a to f) allowed) : ";
    cin>>str;
    Encrypt_the_string(str);
}
