#include <iostream>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		int t;
		cin>>t;
		while(t--){
			int n,i,j;
			cin>>n;
			int arr[n],rev[n]={0};
			for(i=0;i<n;i++){
				cin>>arr[i];
			}
			j=n-1;
			i=0;
			while(j>=0&&i<n){
				rev[i]=arr[j];
				j--;
				i++;
			}
			for(i=0;i<n;i++){
				cout<<rev[i]<<" ";
			}
			cout<<endl;
		}
		return 0;
}