#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}


	int ans = 2;
	int pd = arr[1]-arr[0];
	int i = 2;
	int curr = 2;

	while(i<n){
		if(pd == arr[i]-arr[i-1]){
			curr++;
		}else{
			pd = arr[i]-arr[i-1];
			curr = 2;
		}
		ans = max(ans,curr);
		i++
	}
	cout<<ans<<endl;
	return 0;
}


// logic:


// iterate from 2nd item to last item as the first distance will be the distance between 2nd and 1st item

// maintain previous distance which is the difference between the ith item and the previous item than that

// then comes the current max that is given by the addition to the 2 and if the previous distance is equal to the distance of the present item

// then comes the answer  it will be the max value between the present answer and the current max


// while iterating there will be 2 conditions

// 	either the previous distance will be equal to the present distance  in that case the current value will be increased

// 	or that wont be equal in that case we will change the previous distance to the current distance and current max length to the 2 again