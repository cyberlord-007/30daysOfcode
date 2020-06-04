// Brute force method
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  int t; cin>>t; while(t--)
#define dec(x,y)  fixed<<setprecision(y)<<x
#define M  1000000007


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	w(t) {
		int n,m,i,j,x;
		cin>>n>>m;
		int a[n],b[m];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<m;i++){
			cin>>b[i];
		}
		int u[m+n],c[m+n];
		int k=0;
		i=0;
		while(i<n){
			u[k++]=a[i];
			i++;
		}
		x=0;
		for(i=0;i<m;i++){
			int flag=1;
			for(j=0;j<n;j++){
				if(b[i]==a[j]){
					flag=0;
					break;
				}
			}
			if(flag){
				u[k++]=b[i];
			}
			if(!flag){
				c[x++]=b[i];
			}
		}
		for(i=0;i<k;i++){
			cout<<u[i]<<" ";
		}
		cout<<endl;
		for(i=0;i<x;i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}