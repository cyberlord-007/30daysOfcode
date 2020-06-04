#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  int t; cin>>t; while(t--)
template <typename T, size_t size> void print(const T (&array)[size])
{
    for(size_t i = 0; i < size; ++i)
        std::cout << array[i] << " ";
}
#define dec(x,y)  fixed<<setprecision(y)<<x
#define M  1000000007


int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	w(t) {
		ll n,m,i,j;
		cin>>n>>m;
		ll a[n],b[m];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<m;i++){
			cin>>b[i];
		}
		i=0;
		j=0;
		while(i<n&&j<m){
			if(a[i]<b[j]){
				cout<<a[i++]<<" ";
			}
			else if(a[i]>b[j]){
				cout<<b[j++]<<" ";
			}
			else {
				cout<<a[i]<<" ";
				j++;
				i++;
			}
		}
		while(i<n){
			cout<<a[i]<<" ";
			i++;
		}
		while(j<m){
			cout<<b[j++]<<" ";
		}
		cout<<endl;
	}
	return 0;
}