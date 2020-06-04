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
		ll n,i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		int temp=arr[n-1];
		for(i=n-1;i>0;i--){
			arr[i]=arr[i-1];
		}
		arr[0]=temp;
		for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}