#include<iostream>
using namespace std;

//zigzag pattern
///rows=1-3
//column=1-row_number i) (R+c)%c=0 print star
//ii) R=2 and C%4=0 print star
///else print space

///  *   *  
/// * * * * 
///*   *   *

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }



    return 0;
}