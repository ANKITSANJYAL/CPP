#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;

    char op;
    cin>>op;

    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1+n2<<endl;
            break;
        case '*':
            cout<<n1+n2<<endl;
            break;
        case '/':
            cout<<n1+n2<<endl;
            break;
        default:
            cout<<"Enter the valid operator"<<endl;
            break;

    }
    return 0;
}

//user guide
//enter two numbers in different lines and the third line will be operator
