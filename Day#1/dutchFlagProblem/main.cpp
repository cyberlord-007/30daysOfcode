// Simple Approach
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
			int n,i;
			int count0=0,count1=0,count2=0;
			cin>>n;
			int arr[n];
			for(i=0;i<n;i++){
				cin>>arr[i];
			}
			for(i=0;i<n;i++){
				switch(arr[i]){
					case 0:
						count0++;
						break;
					case 1:
						count1++;
						break;
					case 2:
						count2++;
						break;
				}
			}
			i=0;
			while(count0>0){
				arr[i++]=0;
				count0--;
			}
			while(count1>0){
				arr[i++]=1;
				count1--;
			}
			while(count2>0){
				arr[i++]=2;
				count2--;
			}
			for(i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
		
		}
		return 0;
}

// Duth National Flag Algorithm

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
			int arr[n];
			for(i=0;i<n;i++){
				cin>>arr[i];
			}
			int low=0,mid=0,high=n-1;
			while(mid<=high){
				switch(arr[mid]){
					case 0:
						swap(arr[low++],arr[mid++]);
						break;
					case 1:
						mid++;
						break;
					case 2:
						swap(arr[mid],arr[high--]);
						break;
				}
			}
			for(i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
		}
		return 0;
}