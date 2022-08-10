#include<iostream>
using namespace std;

int main(){
    int savings;
    cin>>savings;
    
    //if else conditions
    if(savings>5000){
        if(savings>10000){
            cout<<"Road Trip with neha\n";
        }else{
            cout<<"shopping with neha\n";
        }
    }else if(savings>2000){
        cout<<"Rashmi"<<endl;
    }else{
        cout<<"Friends\n";
    }
}