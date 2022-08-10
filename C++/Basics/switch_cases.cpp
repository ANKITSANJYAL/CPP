#include<iostream>
using namespace std;


// switch statments for multiple language robot
int main(){

    char button;
    cout<<"Input a character: ";
    cin>>button;

    switch(button){
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"Hola"<<endl;
            break;
        case 'c':
            cout<<"GUTEN TAG"<<endl;
            break;
        
        default:
            cout<<"I am still learning more!"<<endl;
            break;

    }

    

    return 0;
}