#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cin>>num1;   //taking user input
    cin>>num2;

    int sum = num1+num2;   //addition
    int diff = num1-num2;  // subtraction
    int prod = num1*num2;  // product or multiplication
    int div = num1/num2;   // division

    cout<<"sum "<<sum<<endl;            // printing the outputs
    cout<<"Difference "<<diff<<endl;
    cout<<"Product "<<prod<<endl;
    cout<<"Division "<<div<<endl; 

}