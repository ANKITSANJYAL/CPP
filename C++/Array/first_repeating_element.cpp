#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int N = 1e6+1;
	int idx[N];

	for(int i=0;i<N;i++){
		idx[i] = -1;
	}

	int mindex = INT_MAX;

	for(int i = 0;i<n;i++){
		if(idx[a[i]]!=-1){
			mindex = min(mindex,idx[a[i]]);
		}else{
			idx[a[i]] = i;
		}
	}

	if(mindex == INT_MAX){
		cout<<"-1";
	}else{
		cout<<mindex+1<<endl;
	}
}