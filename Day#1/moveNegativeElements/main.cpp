
#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		int t;
		cin>>t;
		while(t--){
			int n,i;
			cin>>n;
			int arr[n],b[n];
			for(i=0;i<n;i++){
				cin>>arr[i];
			}
			int j=0;
			for(i=0;i<n;i++){
				if(arr[i]>=0){
					b[j++]=arr[i];
				}
			}
			for(i=0;i<n;i++){
				if(arr[i]<0){
					b[j++]=arr[i];
				}
			}
			for(i=0;i<n;i++){
				cout<<b[i]<<" ";
			}
		}
		return 0;
}