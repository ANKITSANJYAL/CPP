#include<iostream>
using namespace std;


int fact(int number){
	int factorial = 1;

	for(int i=1;i<=number;i++){
		factorial*=i;
	}
	return factorial;
}
int main(){
	int n;
	cin>>n;

	int answer = fact(n);
	cout<<answer<<endl;
	return 0;
}