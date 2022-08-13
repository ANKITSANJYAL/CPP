#include<iostream>
using namespace std;

///reverse a number
int main(){
    int n;
    cin>>n;
    int reverse;

    while(n>0){   //until the number will be 0
        int lastdigit = n%10;   // find the last number
        reverse = reverse*10+lastdigit;  // and add the last number to the reverse*10 in order to make its position but not the numeber
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}