#include<iostream>
#include<string>
using namespace std;
int num_to_roman(int num){
    int arr[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string romanVAL[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    while(num>0){
        int quotient=num/arr[i];
        num=num%arr[i];
        while(quotient--){
            cout<<romanVAL[i];
        }
        i--;
    }
}
int main()
{
    int number;
    cout<<"enter roman number";
    cin>>number;
    num_to_roman(number);
 
    return 0;
}
