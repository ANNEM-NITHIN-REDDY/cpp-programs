#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int fibonacci(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}
signed main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
		cout<< fibonacci(i) << " ";
}

