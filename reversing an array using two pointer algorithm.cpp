#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
//reverseArray(vi &v,int n){
//	int s = 0;
//	int e = n-1;
//	while(s<=e){
//		swap(v[s],v[e]);
//		s++;
//		e--;
//	}
//}
//int main(){
//	int n;
//	cin>>n;
//	vi vec;
//	for(int i = 0;i<n;i++) {
//		int x;
//		cin>>x;
//		vec.pb(x);
//	}
//	
//	reverseArray(vec,n);
//	for(int i=0;i<n;i++){
//		cout<<vec[i]<<" ";
//	}
//	cout<<endl;
//	return 0;
//}

reverseArrayPoint(vi &vec,int n,int pos){
	int s = pos+1;
	int e = vec.size()-1;
	while(s<=e){
		swap(vec[s],vec[e]);
		s++;
		e--;
	}
}


int main(){
	int m;
	cin>>m;
	vi vec;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		vec.pb(x);
	}
	cout<<"Enter Position From Where Array should Reverse  :  ";
	int pos;
	cin>>pos;
	reverseArrayPoint(vec,m,pos);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	return 0;
}
