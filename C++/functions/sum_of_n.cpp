#include<iostream>
#include<math.h>
using namespace std;

int sum(int n){
	int answer = 1;
	for(i=1;i<=n;i++){
		answer+=i;

	}
	return answer
}
int main(){
	int n;
	cin>>n;

	cout<<sum(n)<<endl;
}


/////or we can use
/// cout<<n*(n+1)/2<<endl;
// directly