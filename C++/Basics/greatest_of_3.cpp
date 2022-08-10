#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;

    cin>>num1;
    cin>>num2;
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<"Maximum Number is "<<num1<<endl;
    }else if(num2>num1 && num2>num3){
        cout<<"Maximum Number is "<<num2<<endl;

    }else{
        cout<<"Maximum Number is "<<num3;
    }

}