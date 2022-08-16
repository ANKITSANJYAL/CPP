#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[n];
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int counter = 1;  // counter is required in order to iterate the code
	while(counter< n-1){
		for(int i=0;i<n-counter-1;i++){   // start the iteration from 9 to n-counter-1
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		counter ++;
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}