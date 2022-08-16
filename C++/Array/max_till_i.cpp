#include<iostream>
using namespace std;

int main(){
	int maxi  = -199999;
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		maxi = max(maxi,arr[i]);
		cout<<maxi<<endl;
	}
	return 0;
}