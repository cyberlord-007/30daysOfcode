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
	w(t){
		ll n,s,i,j,count=0;
		cin>>n>>s;
		ll arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(arr[i]+arr[j]==s){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}