#include<bits/stdc++.h>
#define int signed long long int
using namespace std;

int power(int n,int t){
	if(t==0) 
		return 1;
	return n * power(n,t-1);
}

signed  main() {
	int n,t;
	cin>>n>>t;
	int ans = power(n,t);
	cout<<ans<<endl;
}

