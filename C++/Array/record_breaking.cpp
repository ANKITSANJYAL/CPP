#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n+1];
	a[n] = -1;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	if(n==1){
		cout<<n<<endl;
		return 0;
	}

	int maxi = -1;
	int ans = 0;

	for(int i=0;i<n;i++){
		if(a[i]>maxi,a[i]>a[i+1]){
			ans++;
		}
		maxi = max(maxi,a[i]);
	}

	cout<<ans<<endl;
	return 0;
}