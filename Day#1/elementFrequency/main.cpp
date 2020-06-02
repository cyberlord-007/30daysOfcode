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
			int n,x,i,count=0;
			cin>>n>>x;
			int arr[n];
			for(i=0;i<n;i++){
				cin>>arr[i];
			}
			for(i=0;i<n;i++){
				if(arr[i]==x){
					count++;
				}
			}
			count==0?cout<<"-1"<<"/n":cout<<count;
		}
		return 0;
}