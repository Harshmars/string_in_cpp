#include<iostream>
#include<string>
#include<vector>
using namespace std;
int shortest_distance(vector<string> &s,string w1,string w2){
    int d1=-1,d2=-1;
    int ans=INT16_MAX;
    for(int i=0;i<s.size();i++){
        if(s[i]==w1){
            d1=i;
        }
        if(s[i]==w2){
            d2=i;
        }
        if(d1!=-1&&d2!=-1){
            ans=min(ans,abs(d1-d2));
        }
    }
    return ans;
}

int main()
{   vector<string> s;
    string str;
    int size;
    cout<<"enter how many string you want to enter :  ";
    cin>>size;
    cout<<"enter strings : ";
    for(int i=0;i<size;i++){
        cin>>str;
        s.push_back(str);
    }


    string word1, word2;
    cout<<"enter strings for closest distance :  ";
    cin>>word1>>word2;

    // Function Call
    cout << shortest_distance(s, word1, word2);

    return 0;
}
