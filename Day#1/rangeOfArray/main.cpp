#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		int t;
		cin>>t;
		while(t--){
			int n,i;
			cin>>n;
			int arr[n];
			for(i=0;i<n;i++){
				cin>>arr[i];
			}
			sort(arr,arr+n);
			float max=arr[n-1];
			float min=arr[0];
			float range = max-min;
			cout<<"Range:"<<" "<<range<<endl;
			cout<<"Coefficient Of Range:"<<" "<<range/(max+min);
		}
}