#include<iostream>
using namespace std;

int octalToDecimal(int n){
	int answer = 0;
	int x= 1;

	while(n>0){
		int y = n%10;
		answer +=(x*y);
		x *=8;
		n/=10;
	}
	return answer;
}
int main(){
	int n;
	cin>>n;

	cout<<octalToDecimal(n)<<endl;
	return 0;
}