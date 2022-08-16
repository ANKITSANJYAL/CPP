#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int current = 0;

	for(int i=0;i<n;i++){  //the iteration start from 0 and goes till n excluded
		current = 0;         // at the starting of all the iteration the current sum will be 0 only
		for(int j=i;j<n;j++){	// we will be comparing the i iteration with j so where the i is the j starts from there only
			current+=a[j];    // adding up the sum to the current sum
			cout<<current<<endl;
		}
	}
	return 0;
}