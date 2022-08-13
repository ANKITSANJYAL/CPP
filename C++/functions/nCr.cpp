#include<iostream>
using namespace std;


int fact(int number){
	int factorial = 1;
	for (int i=2;i<=number;i++){
		factorial*=i;
	}
	return factorial;
}
int main(){
	int n,r;
	cin>>n>>r;

	int answer = fact(n)/(fact(r)*fact(n-r))
	cout<<answer<<endl;
}