#include<iostream>
using namespace std;

//donot print the numbers divisible by 3
int main(){
    for(int i=0;i<100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }


    return 0;
}