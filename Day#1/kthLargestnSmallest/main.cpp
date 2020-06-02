#include <iostream>
#include<algorithm>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		int t;
		cin>>t;
		while(t--){
			int n,k,i;
			cin>>n;
			int arr[n];
			for(i=0;i<n;i++){
				cin>>arr[i];
			}
			cin>>k;
			sort(arr,arr+n);
			cout<<arr[k-1]<<endl;
		}
		return 0;
}