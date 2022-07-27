#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int factorial(int n){
	if(n==1)
		return 1;
	return n*factorial(n-1);
}
signed main(){
	int n;
	cin>>n;
	cout << factorial(n);
}

