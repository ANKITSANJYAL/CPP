#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[n];

	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=1;i<n;i++){
		int current = arr[i];
		int j = i-1;

		while(arr[j]<=current && j>=0){
			arr[j+1] = current;
			j--;

		arr[j+1] = current;

		}
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}