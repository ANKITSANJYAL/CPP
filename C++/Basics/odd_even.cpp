#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;

    if(number%2==0){
        cout<<"Given Number "<<number<<" Is even\n";
    }else{
        cout<<"Given Number "<<number<<" Is Odd\n";
    }
}