#include <iostream>
using namespace std;

//floyd's triangle
//1
//23
//456
//78910
int main() {
    int n;
    cin>>n;

    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

    }
    

    return 0;
}