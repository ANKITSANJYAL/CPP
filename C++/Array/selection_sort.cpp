#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[n];

	cin>>n;

	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
// real logic behind the selection sort
// N^2
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n;j++){
			if(arr[j]<arr[i]){
				int temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" "; 
	}cout<<endl;
}